function sumOfN(n){
    if(n==0){
        return n;
    }
    else{
        return n+sumOfN(n-1);
    }
}

n=parseInt(prompt("Enter the Number: "));

document.write("Sum of N numbers: "+sumOfN(n));