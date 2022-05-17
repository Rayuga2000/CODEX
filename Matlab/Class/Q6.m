%Find factorial of a given number
clc;

a=input('Enter the Number:');
num=a;
f=1;

while(a>0)
    f=f*a;
    a=a-1;
end
fprintf('Factorial of %u is: %u\n',num,f);