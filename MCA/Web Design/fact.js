function fact(n){
    if(n==1){
        return 1;
    }
    else{
        return n*fact(n-1);
    }
}

let n=parseInt(prompt("Enter Number: "));
document.write("Factorial of "+n+": "+fact(n));