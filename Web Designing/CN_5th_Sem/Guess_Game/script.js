function play(){
    value=prompt("Enter min and max range:");
    array_value=value.split(" ");

    min=array_value[0];
    max=array_value[1];

    while(!(prompt("Enter a Number:")==(Math.floor(Math.random()*((max-min)+1)))+parseInt(min))){}
    alert("Good Guess");   
}