var str=prompt("Enter a String or Number:");

var isPalindrome=true;
var l=str.length;

for(let i=0;i<l/2;i++){
    if(str[i]!=str[l-1-i]){
        isPalindrome=false;
        break;
    }
}

if(isPalindrome){
    alert("The String is Palindrome");
}
else{
    alert("The String is not Palindrome");
}