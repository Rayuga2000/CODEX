import { StrictMode } from 'react'
import { createRoot } from 'react-dom/client'
import './index.scss'
import PassGen from './components/Password_Generator/PassGen'
import BG_changer from './components/BG_Changer/BG_changer'

createRoot(document.getElementById('root')).render(
  <StrictMode>
    <BG_changer />
    <PassGen />
  </StrictMode>,
)
