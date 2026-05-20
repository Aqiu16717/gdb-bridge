import { useState } from 'react';
import { useDebugStore } from '../store/debugStore';

export function ExecutionBar() {
  const store = useDebugStore();
  const [expression, setExpression] = useState('');
  const [evalResult, setEvalResult] = useState('');
  const [evalError, setEvalError] = useState('');
  const [loading, setLoading] = useState(false);

  const doAction = async (fn: () => Promise<unknown>) => {
    setLoading(true);
    try {
      await fn();
    } catch (e) {
      setEvalError((e as Error).message);
    } finally {
      setLoading(false);
    }
  };

  const doEval = async () => {
    if (!expression.trim()) return;
    setEvalError('');
    setLoading(true);
    try {
      const result = await store.evaluate(expression.trim());
      setEvalResult(result);
    } catch (e) {
      setEvalError((e as Error).message);
    } finally {
      setLoading(false);
    }
  };

  return (
    <div className="bg-[#131320] border-b border-[#1e1e32] px-4 py-2 flex-shrink-0">
      <div className="flex flex-wrap items-center gap-1.5">
        {/* Execution controls */}
        <button
          onClick={() => doAction(() => store.continueExec())}
          disabled={loading}
          className="px-3 py-1.5 bg-green-700 hover:bg-green-600 disabled:opacity-50 text-white text-xs font-medium rounded transition-colors"
          title="Continue"
        >
          &#9654; Continue
        </button>
        <button
          onClick={() => doAction(() => store.step('step-in'))}
          disabled={loading}
          className="px-3 py-1.5 bg-indigo-700 hover:bg-indigo-600 disabled:opacity-50 text-white text-xs font-medium rounded transition-colors"
          title="Step In"
        >
          &#8595; Step In
        </button>
        <button
          onClick={() => doAction(() => store.step('step-over'))}
          disabled={loading}
          className="px-3 py-1.5 bg-indigo-700 hover:bg-indigo-600 disabled:opacity-50 text-white text-xs font-medium rounded transition-colors"
          title="Step Over"
        >
          &#8594; Step Over
        </button>
        <button
          onClick={() => doAction(() => store.step('step-out'))}
          disabled={loading}
          className="px-3 py-1.5 bg-indigo-700 hover:bg-indigo-600 disabled:opacity-50 text-white text-xs font-medium rounded transition-colors"
          title="Step Out"
        >
          &#8593; Step Out
        </button>

        <span className="text-gray-600 mx-1">|</span>

        {/* Evaluate expression */}
        <input
          value={expression}
          onChange={(e) => setExpression(e.target.value)}
          placeholder="Evaluate expression..."
          className="flex-1 min-w-[150px] bg-[#0a0a0f] border border-[#1e1e32] rounded px-2 py-1.5 text-xs text-white placeholder-gray-600 focus:outline-none focus:border-indigo-500"
          onKeyDown={(e) => e.key === 'Enter' && doEval()}
        />
        <button
          onClick={doEval}
          disabled={loading || !expression.trim()}
          className="px-3 py-1.5 bg-gray-700 hover:bg-gray-600 disabled:opacity-50 text-white text-xs font-medium rounded transition-colors"
        >
          Eval
        </button>

        {/* Stop event info */}
        {store.stopEvent && (
          <span className="text-xs text-gray-500 ml-2">
            {store.stopEvent.reason} at {store.stopEvent.location.function ?? '?'}:
            {store.stopEvent.location.line ?? '?'}
          </span>
        )}
      </div>

      {/* Eval result */}
      {(evalResult || evalError) && (
        <div className={`mt-1 text-xs font-mono p-1.5 rounded ${
          evalError ? 'bg-red-900/20 text-red-400' : 'bg-green-900/20 text-green-400'
        }`}>
          {evalError ? evalError : `→ ${evalResult}`}
        </div>
      )}
    </div>
  );
}
