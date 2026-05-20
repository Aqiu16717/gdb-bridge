import { useState } from 'react';
import { useDebugStore } from '../store/debugStore';
import type { Breakpoint } from '../types/api';

export function WatchpointPanel() {
  const store = useDebugStore();
  const [expression, setExpression] = useState('');
  const [watchType, setWatchType] = useState('write');
  const [result, setResult] = useState<Breakpoint | null>(null);
  const [error, setError] = useState('');
  const [loading, setLoading] = useState(false);

  const handleSet = async () => {
    if (!expression.trim()) return;
    setError('');
    setResult(null);
    setLoading(true);
    try {
      const bp = await store.setWatchpoint(expression.trim(), watchType);
      setResult(bp);
      setExpression('');
    } catch (e) {
      setError((e as Error).message);
    } finally {
      setLoading(false);
    }
  };

  return (
    <div>
      <h3 className="text-sm font-semibold text-gray-300 mb-3">Data Watchpoints</h3>
      <p className="text-xs text-gray-500 mb-3">
        Pause execution when a variable or memory location is read, written, or accessed.
      </p>

      <div className="flex flex-col sm:flex-row gap-2 mb-4">
        <input
          value={expression}
          onChange={(e) => setExpression(e.target.value)}
          placeholder="Expression (e.g. *ptr)"
          className="flex-1 bg-[#0a0a0f] border border-[#1e1e32] rounded-lg px-3 py-2 text-sm text-white placeholder-gray-600 focus:outline-none focus:border-indigo-500"
          onKeyDown={(e) => e.key === 'Enter' && handleSet()}
        />
        <select
          value={watchType}
          onChange={(e) => setWatchType(e.target.value)}
          className="bg-[#0a0a0f] border border-[#1e1e32] rounded-lg px-3 py-2 text-sm text-white focus:outline-none focus:border-indigo-500"
        >
          <option value="write">Write</option>
          <option value="read">Read</option>
          <option value="access">Access</option>
        </select>
        <button
          onClick={handleSet}
          disabled={loading || !expression.trim()}
          className="px-4 py-2 bg-amber-700 hover:bg-amber-600 disabled:opacity-50 text-white text-sm rounded-lg transition-colors"
        >
          Set Watch
        </button>
      </div>

      {error && (
        <div className="p-3 bg-red-900/20 border border-red-800/50 rounded-lg text-sm text-red-400 mb-3">
          {error}
        </div>
      )}

      {result && (
        <div className="bg-[#0a0a0f] border border-green-800/50 rounded-lg p-3">
          <p className="text-sm text-green-400">
            Watchpoint #{result.breakpoint_id} set on {result.location}
          </p>
        </div>
      )}
    </div>
  );
}
