import { StrictMode } from 'react'
import { createRoot } from 'react-dom/client'
import States from './States.jsx'

import BG_changer from './BG_changer.jsx'

import './index.scss'

createRoot(document.getElementById('root')).render(
  <StrictMode>
    {/*<States />*/}
    <BG_changer />
  </StrictMode>,
)
