import { useState } from 'react'
import reactLogo from './assets/react.svg'
import viteLogo from '/vite.svg'
import './App.css'

function App() {
  const [count, setCount] = useState(10)

  function Increase(){
    if(count<20){
      console.log(count)
      setCount(count+1)
    }
  }
  
  function Decrease(){
    if(count>0){
      console.log(count)
      setCount(count-1)
    }
  }

  return (
    <>
      <h1>{count}</h1>
      <button onClick={Increase}>+</button>
      <button onClick={Decrease}>-</button>
    </>
  )
}

export default App
