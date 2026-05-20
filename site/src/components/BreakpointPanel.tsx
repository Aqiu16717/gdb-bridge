import { useEffect, useState } from 'react';
import { useDebugStore } from '../store/debugStore';

export function BreakpointPanel() {
  const store = useDebugStore();
  const [location, setLocation] = useState('');
  const [condition, setCondition] = useState('');
  const [loading, setLoading] = useState(false);

  useEffect(() => {
    store.refreshBreakpoints();
  }, [store.activeSessionId]);

  const handleAdd = async () => {
    if (!location.trim()) return;
    setLoading(true);
    try {
      await store.setBreakpoint(location.trim(), condition.trim() || undefined);
      setLocation('');
      setCondition('');
    } finally {
      setLoading(false);
    }
  };

  return (
    <div className="p-3">
      <h3 className="text-xs font-semibold text-gray-400 uppercase tracking-wider mb-3">
        Breakpoints ({store.breakpoints.length})
      </h3>

      {/* Add form */}
      <div className="mb-3 space-y-1.5">
        <input
          value={location}
          onChange={(e) => setLocation(e.target.value)}
          placeholder="main.c:42 or main"
          className="w-full bg-[#0a0a0f] border border-[#1e1e32] rounded px-2 py-1.5 text-xs text-white placeholder-gray-600 focus:outline-none focus:border-indigo-500"
          onKeyDown={(e) => e.key === 'Enter' && handleAdd()}
        />
        <input
          value={condition}
          onChange={(e) => setCondition(e.target.value)}
          placeholder="Condition (e.g. x > 10)"
          className="w-full bg-[#0a0a0f] border border-[#1e1e32] rounded px-2 py-1.5 text-xs text-white placeholder-gray-600 focus:outline-none focus:border-indigo-500"
          onKeyDown={(e) => e.key === 'Enter' && handleAdd()}
        />
        <button
          onClick={handleAdd}
          disabled={loading || !location.trim()}
          className="w-full px-2 py-1.5 bg-indigo-700 hover:bg-indigo-600 disabled:bg-indigo-900 disabled:text-gray-600 text-white text-xs font-medium rounded transition-colors"
        >
          + Add Breakpoint
        </button>
      </div>

      {/* List */}
      <div className="space-y-1">
        {store.breakpoints.length === 0 ? (
          <p className="text-xs text-gray-600 italic">No breakpoints</p>
        ) : (
          store.breakpoints.map((bp) => (
            <div
              key={bp.breakpoint_id}
              className="flex items-center justify-between bg-[#0a0a0f] border border-[#1e1e32] rounded px-2 py-1.5 group"
            >
              <div className="min-w-0 flex-1">
                <p className="text-xs font-mono text-gray-300 truncate">
                  #{bp.breakpoint_id} {bp.location}
                </p>
                {bp.condition && (
                  <p className="text-[10px] text-amber-400/80 truncate">
                    if {bp.condition}
                  </p>
                )}
                <p className="text-[10px] text-gray-600">
                  hits: {bp.times} {!bp.enabled && '(disabled)'}
                </p>
              </div>
              <button
                onClick={() => store.deleteBreakpoint(bp.breakpoint_id)}
                className="text-gray-600 hover:text-red-400 opacity-0 group-hover:opacity-100 transition-all text-sm ml-2"
                aria-label={`Delete breakpoint ${bp.breakpoint_id}`}
              >
                &times;
              </button>
            </div>
          ))
        )}
      </div>
    </div>
  );
}
