import { useEffect, useState } from 'react';
import { useDebugStore } from '../store/debugStore';

export function RegisterPanel() {
  const store = useDebugStore();
  const [loading, setLoading] = useState(false);

  const handleRefresh = async () => {
    setLoading(true);
    try {
      await store.refreshRegisters();
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
        <h3 className="text-sm font-semibold text-gray-300">CPU Registers</h3>
        <button
          onClick={handleRefresh}
          disabled={loading}
          className="text-xs text-indigo-400 hover:text-indigo-300 transition-colors"
        >
          Refresh
        </button>
      </div>

      {!store.registers || Object.keys(store.registers).length === 0 ? (
        <p className="text-sm text-gray-600 italic">
          No register data. Ensure the program is stopped at a breakpoint, then refresh.
        </p>
      ) : (
        <div className="grid grid-cols-2 sm:grid-cols-3 md:grid-cols-4 gap-1.5">
          {Object.entries(store.registers).map(([name, value]) => (
            <div
              key={name}
              className="bg-[#0a0a0f] border border-[#1e1e32] rounded px-2 py-1.5"
            >
              <p className="text-[10px] text-gray-500 font-mono uppercase">{name}</p>
              <p className="text-xs font-mono text-yellow-400 truncate">{value}</p>
            </div>
          ))}
        </div>
      )}
    </div>
  );
}
