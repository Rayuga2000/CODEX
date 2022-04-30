%Find factorial of a given number
a=input('Enter the Number:');
num=a;
f=1;

while(a>0)
    f=f*a;
    a=a-1;
end
fprintf('Factorial of %u is: %4u\n',num,f);