function calculate(){
    let x=parseInt(document.getElementById('num1').value);
    let y=parseInt(document.getElementById('num2').value);

    document.getElementById('mul').innerHTML=x*y;
    document.getElementById('div').innerHTML=x/y;
}