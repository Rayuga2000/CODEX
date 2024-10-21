// Infinite Background Color Changer with setInterval()

const str="0123456789ABCDEF"
let intervalID

const changeColor = () => {
    intervalID=setInterval(()=>{
        let color="#"
        for(let i=0;i<6;i++){
            color+=str[Math.floor(Math.random()*16)]
        }
        document.body.style.backgroundColor=color
    },1000)    
}

document.getElementById("start").addEventListener('click',changeColor)

document.getElementById("stop").addEventListener('click',()=>{
    console.log('Stopped Interval')
    clearInterval(intervalID)
    intervalID=null
})

// Heading Changer with setTimer()

Headings=document.querySelectorAll('h1')

function changeText(){
    Headings[0].innerHTML="Background Color Changer"
    Headings[1].innerHTML="Heading Changer"
}

let timerID=setTimeout(changeText,2000)

document.getElementById("stopTimer").addEventListener('click',()=>{
    console.log('Stopped Timer')
    clearTimeout(timerID)
})

// Reset to default without refreshing the page

document.getElementById('reset').addEventListener('click',()=>{
    document.body.style.backgroundColor='black'
    Headings[0].innerHTML="SetInterval"
    Headings[1].innerHTML="SetTimeOut"
    timerID=setTimeout(changeText,2000)
})