export type SessionStatus = 'created' | 'running' | 'stopped' | 'terminated';

export interface Target {
  type: 'file' | 'pid' | 'remote';
  path: string;
  args?: string[];
  env?: Record<string, string>;
}

export interface StoppedAt {
  file: string | null;
  line: number | null;
  function: string | null;
}

export interface Session {
  session_id: string;
  status: SessionStatus;
  target_pid?: number | null;
  created_at: string;
  stopped_at?: StoppedAt | null;
}

export interface CreateSessionRequest {
  target: Target;
  gdb_path?: string;
  working_dir?: string | null;
}

export type StepType = 'step-in' | 'step-over' | 'step-out';
export type StopReason = 'breakpoint-hit' | 'step-done' | 'signal-received' | 'exit' | 'error';
export type WatchType = 'read' | 'write' | 'access';

export interface Location {
  file: string | null;
  line: number | null;
  function: string | null;
  address: string | null;
}

export interface StopEvent {
  status: string;
  reason: StopReason;
  location: Location;
  thread_id?: number | null;
  signal?: string | null;
}

export interface CreateBreakpointRequest {
  location: string;
  condition?: string | null;
  hit_count?: number | null;
}

export interface Breakpoint {
  breakpoint_id: number;
  location: string;
  enabled: boolean;
  condition?: string | null;
  hit_count?: number | null;
  times: number;
}

export interface Variable {
  name: string;
  type: string | null;
  value: unknown;
  address?: string | null;
  is_optimized_out: boolean;
}

export interface Frame {
  level: number;
  function: string | null;
  file: string | null;
  line: number | null;
  address: string | null;
}

export interface ThreadInfo {
  thread_id: number;
  name: string | null;
  function: string | null;
  line: number | null;
  is_stopped: boolean;
}

export interface EvaluationResult {
  expression: string;
  value: unknown;
  type: string | null;
}

export interface ErrorDetail {
  code: string;
  message: string;
  details: Record<string, unknown>;
}

export interface ErrorResponse {
  error: ErrorDetail;
}
