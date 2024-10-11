import { StrictMode } from 'react'
import { createRoot } from 'react-dom/client'
import States from './States.jsx'

import './index.css'

createRoot(document.getElementById('root')).render(
  <StrictMode>
    <States />
  </StrictMode>,
)
