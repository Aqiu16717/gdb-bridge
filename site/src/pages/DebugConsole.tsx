import { useEffect, useState } from 'react';
import { useParams, useNavigate } from 'react-router-dom';
import { useDebugStore } from '../store/debugStore';
import { BreakpointPanel } from '../components/BreakpointPanel';
import { ExecutionBar } from '../components/ExecutionBar';
import { VariablePanel } from '../components/VariablePanel';
import { FramePanel } from '../components/FramePanel';
import { ThreadPanel } from '../components/ThreadPanel';
import { RegisterPanel } from '../components/RegisterPanel';
import { WatchpointPanel } from '../components/WatchpointPanel';

export function DebugConsole() {
  const { id } = useParams<{ id: string }>();
  const navigate = useNavigate();
  const store = useDebugStore();
  const [tab, setTab] = useState<'vars' | 'frames' | 'threads' | 'regs' | 'watch'>('vars');

  useEffect(() => {
    if (id) store.selectSession(id);
  }, [id]);

  const session = store.sessions.find((s) => s.session_id === id);

  if (!session) {
    return (
      <div className="min-h-screen p-8 flex items-center justify-center">
        <div className="text-center">
          <p className="text-gray-400">Loading session...</p>
          <button onClick={() => navigate('/')} className="mt-4 text-indigo-400 text-sm hover:underline">
            &larr; Back to dashboard
          </button>
        </div>
      </div>
    );
  }

  return (
    <div className="min-h-screen flex flex-col">
      {/* Header */}
      <header className="flex items-center justify-between px-4 py-3 bg-[#131320] border-b border-[#1e1e32] flex-shrink-0">
        <div className="flex items-center gap-3 min-w-0">
          <button
            onClick={() => navigate('/')}
            className="text-gray-500 hover:text-white transition-colors text-sm"
          >
            &larr; Sessions
          </button>
          <span className="text-gray-600">|</span>
          <span className="text-sm font-mono text-gray-300 truncate">{session.session_id}</span>
          {session.stopped_at && (
            <span className="text-xs text-indigo-400 truncate">
              {session.stopped_at.function}:{session.stopped_at.line}
            </span>
          )}
        </div>
        <div className="flex items-center gap-2">
          <span className={`text-xs px-2 py-0.5 rounded ${
            session.status === 'running' ? 'bg-green-900/50 text-green-400' :
            session.status === 'stopped' ? 'bg-yellow-900/50 text-yellow-400' :
            'bg-gray-800 text-gray-400'
          }`}>
            {session.status}
          </span>
        </div>
      </header>

      {/* Execution bar */}
      <ExecutionBar />

      {/* Main content */}
      <div className="flex-1 flex flex-col lg:flex-row overflow-hidden">
        {/* Left panel: Breakpoints */}
        <div className="lg:w-72 xl:w-80 flex-shrink-0 border-b lg:border-b-0 lg:border-r border-[#1e1e32] overflow-y-auto bg-[#0d0d16]">
          <BreakpointPanel />
        </div>

        {/* Center panel: Tab content */}
        <div className="flex-1 flex flex-col overflow-hidden">
          {/* Tabs */}
          <div className="flex border-b border-[#1e1e32] bg-[#131320] flex-shrink-0 overflow-x-auto">
            {(['vars', 'frames', 'threads', 'regs', 'watch'] as const).map((t) => (
              <button
                key={t}
                onClick={() => setTab(t)}
                className={`px-4 py-2 text-xs font-medium whitespace-nowrap transition-colors ${
                  tab === t
                    ? 'text-indigo-400 border-b-2 border-indigo-400'
                    : 'text-gray-500 hover:text-gray-300'
                }`}
              >
                {t === 'vars' && 'Variables'}
                {t === 'frames' && 'Call Stack'}
                {t === 'threads' && 'Threads'}
                {t === 'regs' && 'Registers'}
                {t === 'watch' && 'Watchpoints'}
              </button>
            ))}
          </div>

          {/* Tab content */}
          <div className="flex-1 overflow-y-auto p-4">
            {tab === 'vars' && <VariablePanel />}
            {tab === 'frames' && <FramePanel />}
            {tab === 'threads' && <ThreadPanel />}
            {tab === 'regs' && <RegisterPanel />}
            {tab === 'watch' && <WatchpointPanel />}
          </div>
        </div>
      </div>
    </div>
  );
}
