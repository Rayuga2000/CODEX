
export default function Button({btn_color}){
    return(
        <button onClick={()=>{
            console.log(btn_color+" Clicked")          
            document.body.style.backgroundColor=btn_color
        }} 
        className="text-white rounded-full p-4 border-4 border-white-500" 
        style={{backgroundColor: btn_color}}></button>
    )
}