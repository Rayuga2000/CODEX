function calculate(){
    x=parseInt(document.getElementById('x').value);
    y=parseInt(document.getElementById('y').value);

    document.getElementById('add').innerHTML="The addition is "+(x+y);
    document.getElementById('multiply').innerHTML="The multiplication is "+(x*y);
    document.getElementById('divide').innerHTML="The division is "+(x/y);
    document.getElementById('modulo').innerHTML="The modulo is "+(x%y);
}
function clearText(){
    document.getElementById('add').innerHTML="";
    document.getElementById('multiply').innerHTML="";
    document.getElementById('divide').innerHTML="";
    document.getElementById('modulo').innerHTML="";
}