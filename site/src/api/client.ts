import type {
  Session,
  CreateSessionRequest,
  StopEvent,
  Breakpoint,
  CreateBreakpointRequest,
  Variable,
  Frame,
  EvaluationResult,
  ThreadInfo,
  ErrorResponse,
} from '../types/api';

const BASE = '/api';

class ApiError extends Error {
  status: number;
  code: string;
  details: Record<string, unknown>;

  constructor(
    status: number,
    code: string,
    message: string,
    details: Record<string, unknown> = {},
  ) {
    super(message);
    this.name = 'ApiError';
    this.status = status;
    this.code = code;
    this.details = details;
  }
}

async function request<T>(
  path: string,
  options: RequestInit = {},
): Promise<T> {
  const res = await fetch(`${BASE}${path}`, {
    headers: { 'Content-Type': 'application/json', ...options.headers },
    ...options,
  });

  if (!res.ok) {
    let err: ErrorResponse | null = null;
    try {
      err = await res.json();
    } catch {
      // no body
    }
    throw new ApiError(
      res.status,
      err?.error?.code ?? `HTTP_${res.status}`,
      err?.error?.message ?? res.statusText,
      err?.error?.details ?? {},
    );
  }

  if (res.status === 204) return undefined as T;
  return res.json();
}

export const api = {
  health: () => request<{ status: string }>('/health'),

  // Sessions
  listSessions: () =>
    request<{ sessions: Session[] }>('/sessions').then((r) => r.sessions),

  createSession: (data: CreateSessionRequest) =>
    request<Session>('/sessions', {
      method: 'POST',
      body: JSON.stringify(data),
    }),

  getSession: (id: string) => request<Session>(`/sessions/${id}`),

  deleteSession: (id: string) =>
    request<void>(`/sessions/${id}`, { method: 'DELETE' }),

  // Execution
  continueExec: (id: string) =>
    request<StopEvent>(`/sessions/${id}/continue`, { method: 'POST' }),

  step: (id: string, type: string = 'step-in') =>
    request<StopEvent>(`/sessions/${id}/step?type=${type}`, {
      method: 'POST',
    }),

  // Breakpoints
  getBreakpoints: (id: string) =>
    request<{ breakpoints: Breakpoint[] }>(
      `/sessions/${id}/breakpoints`,
    ).then((r) => r.breakpoints),

  setBreakpoint: (id: string, data: CreateBreakpointRequest) =>
    request<Breakpoint>(`/sessions/${id}/breakpoints`, {
      method: 'POST',
      body: JSON.stringify(data),
    }),

  deleteBreakpoint: (id: string, bpId: number) =>
    request<void>(`/sessions/${id}/breakpoints/${bpId}`, {
      method: 'DELETE',
    }),

  // Variables
  getVariable: (id: string, name: string) =>
    request<Variable>(`/sessions/${id}/variables/${name}`),

  // Frames
  getFrames: (id: string) =>
    request<{ frames: Frame[] }>(`/sessions/${id}/frames`).then(
      (r) => r.frames,
    ),

  // Evaluate
  evaluate: (id: string, expression: string) =>
    request<EvaluationResult>(`/sessions/${id}/evaluate`, {
      method: 'POST',
      body: JSON.stringify({ expression }),
    }),

  // Threads
  getThreads: (id: string) =>
    request<{ threads: ThreadInfo[] }>(
      `/sessions/${id}/threads`,
    ).then((r) => r.threads),

  selectThread: (id: string, threadId: number) =>
    request<void>(`/sessions/${id}/threads/${threadId}/select`, {
      method: 'POST',
    }),

  // Watchpoints
  setWatchpoint: (
    id: string,
    expression: string,
    watchType: string = 'write',
  ) =>
    request<Breakpoint>(
      `/sessions/${id}/watchpoints?expression=${encodeURIComponent(expression)}&watch_type=${watchType}`,
      { method: 'POST' },
    ),

  // Registers
  getRegisters: (id: string) =>
    request<{ registers: Record<string, string> }>(
      `/sessions/${id}/registers`,
    ).then((r) => r.registers),

  // Remote + Core dump
  remoteAttach: (id: string, host: string, port: number) =>
    request<Session>(
      `/sessions/${id}/remote-attach?host=${host}&port=${port}`,
      { method: 'POST' },
    ),

  loadCore: (id: string, corePath: string, execPath?: string) =>
    request<Session>(
      `/sessions/${id}/load-core?core_path=${encodeURIComponent(corePath)}${execPath ? `&exec_path=${encodeURIComponent(execPath)}` : ''}`,
      { method: 'POST' },
    ),
};

export { ApiError };
