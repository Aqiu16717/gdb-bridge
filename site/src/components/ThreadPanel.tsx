import { useEffect, useState } from 'react';
import { useDebugStore } from '../store/debugStore';
import { api } from '../api/client';

export function ThreadPanel() {
  const store = useDebugStore();
  const [loading, setLoading] = useState(false);
  const [msg, setMsg] = useState('');

  const handleRefresh = async () => {
    setLoading(true);
    try {
      await store.refreshThreads();
    } finally {
      setLoading(false);
    }
  };

  useEffect(() => {
    handleRefresh();
  }, [store.activeSessionId]);

  const handleSelect = async (threadId: number) => {
    try {
      setMsg(`Switched to thread ${threadId}`);
      const id = store.activeSessionId;
      if (!id) return;
      await api.selectThread(id, threadId);
      setTimeout(() => setMsg(''), 2000);
    } catch (e) {
      setMsg(`Error: ${(e as Error).message}`);
    }
  };

  return (
    <div>
      <div className="flex items-center justify-between mb-3">
        <h3 className="text-sm font-semibold text-gray-300">Threads</h3>
        <button
          onClick={handleRefresh}
          disabled={loading}
          className="text-xs text-indigo-400 hover:text-indigo-300 transition-colors"
        >
          Refresh
        </button>
      </div>

      {msg && (
        <div className="mb-3 text-xs text-indigo-400 bg-indigo-900/20 border border-indigo-800/50 rounded-lg p-2">
          {msg}
        </div>
      )}

      {store.threads.length === 0 ? (
        <p className="text-sm text-gray-600 italic">
          No thread info. Run or step first, then refresh.
        </p>
      ) : (
        <div className="space-y-1.5">
          {store.threads.map((t) => (
            <div
              key={t.thread_id}
              className={`flex items-center justify-between bg-[#0a0a0f] border rounded-lg p-3 ${
                t.is_stopped ? 'border-yellow-800/30' : 'border-[#1e1e32]'
              }`}
            >
              <div className="min-w-0">
                <div className="flex items-center gap-2">
                  <span className="text-sm font-mono text-gray-300">TID {t.thread_id}</span>
                  {t.name && <span className="text-xs text-gray-500">({t.name})</span>}
                  {t.is_stopped && (
                    <span className="text-[10px] px-1.5 py-0.5 bg-yellow-900/30 text-yellow-400 rounded">
                      stopped
                    </span>
                  )}
                </div>
                {t.function && (
                  <p className="text-xs text-gray-500 mt-0.5 truncate">
                    {t.function}:{t.line ?? '?'}
                  </p>
                )}
              </div>
              <button
                onClick={() => handleSelect(t.thread_id)}
                className="text-xs text-indigo-400 hover:text-indigo-300 ml-2 flex-shrink-0"
              >
                Select
              </button>
            </div>
          ))}
        </div>
      )}
    </div>
  );
}
