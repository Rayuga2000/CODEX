
import Button from "./Button"

export default function BG_changer(){
    return(
        <div className="rounded-full p-4 mx-auto my-[10%] bg-gray-700 w-[55%] flex justify-around" >
            <Button btn_color="red"/>
            <Button btn_color="green"/>
            <Button btn_color="blue"/>
        </div>
    )
}