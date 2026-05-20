import { useEffect, useState } from 'react';
import { useDebugStore } from '../store/debugStore';

export function FramePanel() {
  const store = useDebugStore();
  const [loading, setLoading] = useState(false);

  const handleRefresh = async () => {
    setLoading(true);
    try {
      await store.refreshFrames();
    } finally {
      setLoading(false);
    }
  };

  useEffect(() => {
    handleRefresh();
  }, [store.activeSessionId]);

  return (
    <div>
      <div className="flex items-center justify-between mb-3">
        <h3 className="text-sm font-semibold text-gray-300">Call Stack</h3>
        <button
          onClick={handleRefresh}
          disabled={loading}
          className="text-xs text-indigo-400 hover:text-indigo-300 transition-colors"
        >
          Refresh
        </button>
      </div>

      {store.frames.length === 0 ? (
        <p className="text-sm text-gray-600 italic">
          No frames. Run or step the program first, then refresh.
        </p>
      ) : (
        <div className="space-y-1.5">
          {store.frames.map((f, i) => (
            <div
              key={f.level}
              className={`bg-[#0a0a0f] border rounded-lg p-3 ${
                i === 0 ? 'border-indigo-800/50' : 'border-[#1e1e32]'
              }`}
            >
              <div className="flex items-center gap-2 mb-1">
                <span className="text-xs font-mono text-gray-500">#{f.level}</span>
                <span className="text-sm font-mono text-indigo-400">
                  {f.function ?? '??'}
                </span>
                {i === 0 && (
                  <span className="text-[10px] px-1.5 py-0.5 bg-indigo-900/50 text-indigo-400 rounded">
                    current
                  </span>
                )}
              </div>
              {f.file && (
                <p className="text-xs text-gray-500 font-mono ml-9">
                  {f.file}:{f.line ?? '?'}
                </p>
              )}
              {f.address && (
                <p className="text-[10px] text-gray-600 font-mono ml-9">{f.address}</p>
              )}
            </div>
          ))}
        </div>
      )}
    </div>
  );
}
