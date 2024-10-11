import { useState } from 'react'
import Props from './Props.jsx'
import Card from './Card.jsx'
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
      <div className="flex justify-center">
        <Card title='Tushar' btnText='Visit Me'/>
        <Card title='Rahul'/>
      </div>
      <div className="p-4 m-auto justify-center max-w-fit border-2 border-solid border-cyan-200 rounded-lg">
        <h1 className='m-4'>{count}</h1>
        <button onClick={Increase} className='bg-green-500 mx-1 text-5xl px-3 py-0 leading-none font-bold'>+</button>
        <button onClick={Decrease} className='bg-red-500 mx-1 text-5xl px-3 py-0 leading-none font-bold'>-</button>
      </div>
      <div className="flex">
        <Props title="Tushar Sarkar"/>
        <Props title="Kashish Sarkar"/>
      </div>
    </>
  )
}

export default App
