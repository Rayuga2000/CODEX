%GCD,LCM
clc

x=input('Enter 1st Number: ');
y=input('Enter 2nd Number: ');

temp=y;
if x<y
    temp=x;
end

for i=1:temp
    if(mod(x,i)==0 && mod(y,i)==0)
        gcd=i;
    end
end

fprintf("GCD: %u\n",gcd);
fprintf("LCM: %u\n",(x*y)/gcd);