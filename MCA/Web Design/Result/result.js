function calculate(){
    let sub1=parseInt(document.getElementById("sub1").value);
    let sub2=parseInt(document.getElementById("sub2").value);
    let sub3=parseInt(document.getElementById("sub3").value);
    let sub4=parseInt(document.getElementById("sub4").value);

    let total=sub1+sub2+sub3+sub4;
    let avg = total/4;

    let result=(total>=150)? 'Pass':'Fail';

    
    if(total>=390){
        grade='A';
    }
    else if(total>=370){
        grade='B';
    }
    else if(total>=270){
        grade='C';
    }
    else if(total>=150){
        grade='D';
    }
    else{
        grade='F';
    }
    document.getElementById('total').innerHTML=total;
    document.getElementById('average').innerHTML=avg;
    document.getElementById('result').innerHTML=result;
    document.getElementById('grade').innerHTML=grade;
}