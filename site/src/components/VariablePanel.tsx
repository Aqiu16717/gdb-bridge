import { useState } from 'react';
import { useDebugStore } from '../store/debugStore';
import type { Variable } from '../types/api';

export function VariablePanel() {
  const store = useDebugStore();
  const [name, setName] = useState('');
  const [result, setResult] = useState<Variable | null>(null);
  const [error, setError] = useState('');
  const [loading, setLoading] = useState(false);

  const handleLookup = async () => {
    if (!name.trim()) return;
    setError('');
    setResult(null);
    setLoading(true);
    try {
      const v = await store.getVariable(name.trim());
      setResult(v);
    } catch (e) {
      setError((e as Error).message);
    } finally {
      setLoading(false);
    }
  };

  return (
    <div>
      <h3 className="text-sm font-semibold text-gray-300 mb-3">Variable Inspector</h3>

      <div className="flex gap-2 mb-4">
        <input
          value={name}
          onChange={(e) => setName(e.target.value)}
          placeholder="Variable name"
          className="flex-1 bg-[#0a0a0f] border border-[#1e1e32] rounded-lg px-3 py-2 text-sm text-white placeholder-gray-600 focus:outline-none focus:border-indigo-500"
          onKeyDown={(e) => e.key === 'Enter' && handleLookup()}
        />
        <button
          onClick={handleLookup}
          disabled={loading || !name.trim()}
          className="px-4 py-2 bg-indigo-700 hover:bg-indigo-600 disabled:opacity-50 text-white text-sm rounded-lg transition-colors"
        >
          Lookup
        </button>
      </div>

      {error && (
        <div className="p-3 bg-red-900/20 border border-red-800/50 rounded-lg text-sm text-red-400 mb-3">
          {error}
        </div>
      )}

      {result && (
        <div className="bg-[#0a0a0f] border border-[#1e1e32] rounded-lg p-4">
          <div className="grid grid-cols-2 gap-3 text-sm">
            <div>
              <span className="text-gray-500">Name</span>
              <p className="text-white font-mono">{result.name}</p>
            </div>
            <div>
              <span className="text-gray-500">Type</span>
              <p className="text-indigo-400 font-mono">{result.type ?? 'unknown'}</p>
            </div>
            <div className="col-span-2">
              <span className="text-gray-500">Value</span>
              <p className="text-green-400 font-mono break-all">
                {JSON.stringify(result.value)}
              </p>
            </div>
            {result.address && (
              <div className="col-span-2">
                <span className="text-gray-500">Address</span>
                <p className="text-yellow-400 font-mono text-xs">{result.address}</p>
              </div>
            )}
            {result.is_optimized_out && (
              <div className="col-span-2">
                <span className="text-amber-400 text-xs">Optimized out by compiler</span>
              </div>
            )}
          </div>
        </div>
      )}

      {!result && !error && !loading && (
        <p className="text-sm text-gray-600 italic">
          Enter a variable name to inspect its value at the current stop point.
        </p>
      )}
    </div>
  );
}
