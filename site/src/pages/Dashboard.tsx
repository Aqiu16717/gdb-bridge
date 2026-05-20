import { useEffect, useState } from 'react';
import { useNavigate } from 'react-router-dom';
import { useDebugStore } from '../store/debugStore';
import type { Session } from '../types/api';
import { api } from '../api/client';

export function Dashboard() {
  const navigate = useNavigate();
  const { sessions, error, refreshSessions, createSession, deleteSession, clearError } =
    useDebugStore();
  const [path, setPath] = useState('');
  const [args, setArgs] = useState('');
  const [health, setHealth] = useState<string | null>(null);

  useEffect(() => {
    refreshSessions();
    api.health().then((r) => setHealth(r.status)).catch(() => setHealth('unreachable'));
  }, [refreshSessions]);

  const handleCreate = async () => {
    if (!path.trim()) return;
    const id = await createSession(path.trim(), args ? args.split(' ') : []);
    setPath('');
    setArgs('');
    navigate(`/session/${id}`);
  };

  const handleDelete = async (id: string) => {
    await deleteSession(id);
  };

  const statusColor = (s: Session['status']) =>
    s === 'running' ? 'text-green-400' :
    s === 'stopped' ? 'text-yellow-400' :
    s === 'terminated' ? 'text-gray-500' : 'text-blue-400';

  const statusDot = (s: Session['status']) =>
    s === 'running' ? 'bg-green-400' :
    s === 'stopped' ? 'bg-yellow-400' :
    s === 'terminated' ? 'bg-gray-500' : 'bg-blue-400';

  return (
    <div className="min-h-screen p-4 md:p-8 max-w-4xl mx-auto">
      <header className="flex items-center justify-between mb-8">
        <div>
          <h1 className="text-2xl font-bold text-white">gdb-bridge</h1>
          <p className="text-sm text-gray-400">Agent-friendly debugging console</p>
        </div>
        <div className="flex items-center gap-2 text-xs">
          <span className={`w-2 h-2 rounded-full ${health === 'ok' ? 'bg-green-400' : 'bg-red-400'}`} />
          <span className="text-gray-500">{health ? `API: ${health}` : 'checking...'}</span>
        </div>
      </header>

      {error && (
        <div className="mb-4 p-3 bg-red-900/30 border border-red-800 rounded-lg text-sm text-red-300 flex justify-between items-center">
          <span>{error}</span>
          <button onClick={clearError} className="text-red-400 hover:text-red-300 ml-2">&times;</button>
        </div>
      )}

      <div className="bg-[#131320] border border-[#1e1e32] rounded-xl p-4 mb-6">
        <h2 className="text-sm font-semibold text-gray-300 mb-3">New Session</h2>
        <div className="flex flex-col sm:flex-row gap-2">
          <input
            value={path}
            onChange={(e) => setPath(e.target.value)}
            placeholder="Path to binary (e.g. ./my_program)"
            className="flex-1 bg-[#0a0a0f] border border-[#1e1e32] rounded-lg px-3 py-2 text-sm text-white placeholder-gray-600 focus:outline-none focus:border-indigo-500"
            onKeyDown={(e) => e.key === 'Enter' && handleCreate()}
          />
          <input
            value={args}
            onChange={(e) => setArgs(e.target.value)}
            placeholder="Args (optional)"
            className="w-48 bg-[#0a0a0f] border border-[#1e1e32] rounded-lg px-3 py-2 text-sm text-white placeholder-gray-600 focus:outline-none focus:border-indigo-500"
            onKeyDown={(e) => e.key === 'Enter' && handleCreate()}
          />
          <button
            onClick={handleCreate}
            disabled={!path.trim()}
            className="px-4 py-2 bg-indigo-600 hover:bg-indigo-500 disabled:bg-indigo-900 disabled:text-gray-500 text-white text-sm font-medium rounded-lg transition-colors"
          >
            Start
          </button>
        </div>
      </div>

      <div className="bg-[#131320] border border-[#1e1e32] rounded-xl overflow-hidden">
        <div className="px-4 py-3 border-b border-[#1e1e32]">
          <h2 className="text-sm font-semibold text-gray-300">
            Sessions ({sessions.length})
          </h2>
        </div>
        {sessions.length === 0 ? (
          <div className="p-8 text-center text-gray-600 text-sm">
            No active sessions. Create one above.
          </div>
        ) : (
          <div className="divide-y divide-[#1e1e32]">
            {sessions.map((s) => (
              <div
                key={s.session_id}
                className="flex items-center justify-between px-4 py-3 hover:bg-white/[0.02] transition-colors cursor-pointer"
                onClick={() => navigate(`/session/${s.session_id}`)}
              >
                <div className="flex items-center gap-3 min-w-0">
                  <span className={`w-2 h-2 rounded-full flex-shrink-0 ${statusDot(s.status)}`} />
                  <div className="min-w-0">
                    <p className="text-sm font-mono text-gray-300 truncate">{s.session_id}</p>
                    {s.stopped_at?.function && (
                      <p className="text-xs text-gray-500 truncate">
                        at {s.stopped_at.function}:{s.stopped_at.line}
                      </p>
                    )}
                  </div>
                </div>
                <div className="flex items-center gap-3 flex-shrink-0">
                  <span className={`text-xs ${statusColor(s.status)}`}>{s.status}</span>
                  <button
                    onClick={(e) => { e.stopPropagation(); handleDelete(s.session_id); }}
                    className="text-gray-600 hover:text-red-400 transition-colors text-lg leading-none"
                    aria-label="Delete session"
                  >
                    &times;
                  </button>
                </div>
              </div>
            ))}
          </div>
        )}
      </div>
    </div>
  );
}
