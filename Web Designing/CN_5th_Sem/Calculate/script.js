function calculate(){
    arr=document.getElementById('x').value;
    arr=arr.split(" ");

    x=parseInt(arr[0]);
    y=parseInt(arr[1]);
    document.getElementById('add').innerHTML="The addition is "+(x+y);
    document.getElementById('multiply').innerHTML="The multiplication is "+(x*y);
    document.getElementById('divide').innerHTML="The division is "+(x/y);
    document.getElementById('modulo').innerHTML="The modulo is "+(x%y);
}
function clear(){
    document.getElementById('add').innerHTML=" asda";
    document.getElementById('multiply').innerHTML=" asda";
    document.getElementById('divide').innerHTML=" asda";
    document.getElementById('modulo').innerHTML=" asda";
}