var n=parseInt(prompt("Enter the Range:"));

var t1=0,t2=1,nextTerm=0;

document.write("The Fibonacci Series are=> ");

for(let i=1;i<=n;i++){
    document.write(t1+" ");
    nextTerm=t1+t2;
    t1=t2;
    t2=nextTerm;
}