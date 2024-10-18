import { useCallback, useEffect, useRef, useState } from 'react'
import './style.scss'

export default function PassGen() {
  const [pass,setPass]=useState("")
  const [allowNum,setAllowNum]=useState(false)
  const [allowChar,setAllowChar]=useState(false)
  const [length,setLength]=useState(8)
  const passRef=useRef(null)
  const btnRef=useRef(null)

  const chngPass = ()=>{    
    let pass=""
    let  str="ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"
    let num="0123456789"
    let char="!@#$%^&*()_+-/"

    if(allowNum) str+=num
    if(allowChar) str+=char
    // console.log(str);

    for(let i=1;i<length;i++){
      let index=Math.floor(Math.random()*str.length+1)
      pass+=str[index]
    }
    
    btnRef.current.style.backgroundColor="#0284c7"
    
    setPass(pass)
  }
  
  const copyToClip=useCallback(()=>{
    passRef.current?.select()
    window.navigator.clipboard.writeText(pass)
    btnRef.current.style.backgroundColor="#dc2626"
  },[pass])

  useEffect(chngPass,[allowChar,allowNum,length])

  return (
    <div className="container">
      <h1>Password Generator</h1>
      <div className='top'>
        <input ref={passRef} value={pass} type="text" placeholder='password' readOnly />
        <button ref={btnRef} onClick={copyToClip} className='bg-sky-600 p-2'>Copy</button>
      </div>
      <div className="bottom">
        <span>
          <input type="range" min={6} max={20} value={length} onChange={(event)=>setLength(event.target.value)} id="slider" /><label htmlFor="slider">Length({length})</label>
        </span>
        <div>
          <span>
            <input type="checkbox" onChange={()=>setAllowNum(!allowNum)} id="number" /><label htmlFor="number">Numbers</label>
          </span>
          <span>
            <input type="checkbox" onChange={()=>setAllowChar(!allowChar)} id="character" /><label htmlFor="character">Characters</label>
          </span>
        </div>
      </div>
    </div>
  )
}
