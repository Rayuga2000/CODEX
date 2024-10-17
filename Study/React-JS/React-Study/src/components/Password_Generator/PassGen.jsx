import { useCallback, useState } from 'react'
import './style.scss'

export default function PassGen() {
  const [pass,setPass]=useState("")
  const [allowNum,setAllowNum]=useState(false)
  const [allowChar,setAllowChar]=useState(false)
  const [length,setLength]=useState(8)

  const chngPass = useCallback(()=>{
    let pass=""
    let  str="ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"
    let num="0123456789"
    let char="!@#$%^&*()_+"

    if(allowNum) str+=num
    if(allowChar) str+=char

    for(let i=0;i<length;i++){
      let index=Math.floor(Math.random()*length+1)
      pass+=str[index]
    }
    
    setPass(pass)
  },[allowChar,allowNum,length])


  return (
    <div className="container">
      <h1>Password Generator</h1>
      <div className='top'>
        <input value={pass} type="text" placeholder='password' />
        <button className='bg-sky-600 p-2'>Copy</button>
      </div>
      <div className="bottom">
        <span>
          <input type="range" min={6} max={20} value={length} onChange={(event)=>setLength(event.target.value)} id="slider" /><label htmlFor="slider">Length({length})</label>
        </span>
        <span>
          <input type="checkbox" onChange={()=>setAllowChar(!allowChar)} id="number" /><label htmlFor="number">Numbers</label>
        </span>
        <span>
          <input type="checkbox" onChange={()=>setAllowNum(!allowNum)} id="character" /><label htmlFor="character">Characters</label>
        </span>
      </div>
    </div>
  )
}
