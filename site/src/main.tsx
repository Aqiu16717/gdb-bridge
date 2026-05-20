import { StrictMode } from 'react';
import { createRoot } from 'react-dom/client';
import { BrowserRouter, Routes, Route } from 'react-router-dom';
import './index.css';
import { Dashboard } from './pages/Dashboard';
import { DebugConsole } from './pages/DebugConsole';

createRoot(document.getElementById('root')!).render(
  <StrictMode>
    <BrowserRouter>
      <Routes>
        <Route path="/" element={<Dashboard />} />
        <Route path="/session/:id" element={<DebugConsole />} />
      </Routes>
    </BrowserRouter>
  </StrictMode>,
);
