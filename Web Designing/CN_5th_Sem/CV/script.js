function check(){
    if(document.f.email.value.indexOf("@")<0){
        alert("Enter Valid Email");
    }

    if(isNaN(document.f.number.value) || document.f.number.value=="" || document.f.number.value.length<10){
        alert("Enter a valid ph no.");
    }

    if(document.f.age.value<1 || document.f.age.value>100 || document.f.age.value=="" || isNaN(document.f.age.value)){
        alert("Enter a valid Age");
    }
}