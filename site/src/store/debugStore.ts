import { create } from 'zustand';
import type {
  Session,
  Breakpoint,
  Variable,
  Frame,
  ThreadInfo,
  StopEvent,
} from '../types/api';
import { api } from '../api/client';

interface DebugState {
  sessions: Session[];
  activeSessionId: string | null;
  error: string | null;

  // Active session data
  stopEvent: StopEvent | null;
  breakpoints: Breakpoint[];
  variables: Variable[];
  frames: Frame[];
  threads: ThreadInfo[];
  registers: Record<string, string> | null;

  // Actions
  refreshSessions: () => Promise<void>;
  createSession: (path: string, args?: string[]) => Promise<string>;
  deleteSession: (id: string) => Promise<void>;
  selectSession: (id: string) => Promise<void>;
  clearError: () => void;

  // Debug actions
  refreshBreakpoints: () => Promise<void>;
  setBreakpoint: (location: string, condition?: string) => Promise<Breakpoint>;
  deleteBreakpoint: (bpId: number) => Promise<void>;
  continueExec: () => Promise<StopEvent>;
  step: (type?: string) => Promise<StopEvent>;
  refreshFrames: () => Promise<void>;
  refreshThreads: () => Promise<void>;
  refreshRegisters: () => Promise<void>;
  getVariable: (name: string) => Promise<Variable>;
  evaluate: (expression: string) => Promise<string>;
  setWatchpoint: (expr: string, type?: string) => Promise<Breakpoint>;
  loadCore: (corePath: string) => Promise<void>;
}

export const useDebugStore = create<DebugState>((set, get) => ({
  sessions: [],
  activeSessionId: null,
  error: null,
  stopEvent: null,
  breakpoints: [],
  variables: [],
  frames: [],
  threads: [],
  registers: null,

  clearError: () => set({ error: null }),

  refreshSessions: async () => {
    try {
      const sessions = await api.listSessions();
      set({ sessions, error: null });
    } catch (e: unknown) {
      set({ error: (e as Error).message });
    }
  },

  createSession: async (path: string, args: string[] = []) => {
    const session = await api.createSession({
      target: { type: 'file', path, args },
    });
    set((s) => ({ sessions: [...s.sessions, session], error: null }));
    return session.session_id;
  },

  deleteSession: async (id: string) => {
    await api.deleteSession(id);
    set((s) => ({
      sessions: s.sessions.filter((x) => x.session_id !== id),
      activeSessionId:
        s.activeSessionId === id ? null : s.activeSessionId,
      error: null,
    }));
  },

  selectSession: async (id: string) => {
    set({
      activeSessionId: id,
      stopEvent: null,
      breakpoints: [],
      variables: [],
      frames: [],
      threads: [],
      registers: null,
    });
    const session = await api.getSession(id);
    set((s) => ({
      sessions: s.sessions.map((x) =>
        x.session_id === id ? session : x,
      ),
      error: null,
    }));
  },

  refreshBreakpoints: async () => {
    const id = get().activeSessionId;
    if (!id) return;
    const bps = await api.getBreakpoints(id);
    set({ breakpoints: bps });
  },

  setBreakpoint: async (location: string, condition?: string) => {
    const id = get().activeSessionId;
    if (!id) throw new Error('No active session');
    const bp = await api.setBreakpoint(id, { location, condition });
    set((s) => ({ breakpoints: [...s.breakpoints, bp] }));
    return bp;
  },

  deleteBreakpoint: async (bpId: number) => {
    const id = get().activeSessionId;
    if (!id) return;
    await api.deleteBreakpoint(id, bpId);
    set((s) => ({
      breakpoints: s.breakpoints.filter((b) => b.breakpoint_id !== bpId),
    }));
  },

  continueExec: async () => {
    const id = get().activeSessionId;
    if (!id) throw new Error('No active session');
    const event = await api.continueExec(id);
    set({ stopEvent: event });
    return event;
  },

  step: async (type: string = 'step-in') => {
    const id = get().activeSessionId;
    if (!id) throw new Error('No active session');
    const event = await api.step(id, type);
    set({ stopEvent: event });
    return event;
  },

  refreshFrames: async () => {
    const id = get().activeSessionId;
    if (!id) return;
    const frames = await api.getFrames(id);
    set({ frames });
  },

  refreshThreads: async () => {
    const id = get().activeSessionId;
    if (!id) return;
    const threads = await api.getThreads(id);
    set({ threads });
  },

  refreshRegisters: async () => {
    const id = get().activeSessionId;
    if (!id) return;
    const regs = await api.getRegisters(id);
    set({ registers: regs });
  },

  getVariable: async (name: string) => {
    const id = get().activeSessionId;
    if (!id) throw new Error('No active session');
    return api.getVariable(id, name);
  },

  evaluate: async (expression: string) => {
    const id = get().activeSessionId;
    if (!id) throw new Error('No active session');
    const result = await api.evaluate(id, expression);
    return String(result.value);
  },

  setWatchpoint: async (expr: string, type: string = 'write') => {
    const id = get().activeSessionId;
    if (!id) throw new Error('No active session');
    return api.setWatchpoint(id, expr, type);
  },

  loadCore: async (corePath: string) => {
    const id = get().activeSessionId;
    if (!id) throw new Error('No active session');
    await api.loadCore(id, corePath);
    await get().refreshFrames();
  },
}));
