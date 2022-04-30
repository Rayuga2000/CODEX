%GCD,LCM
clc
clear all;
close all;

x=input('Enter the Numbers:');
y=input('Enter the Numbers:');

temp=y;
if x<y
    temp=x;
end

for i=1:temp
    if(mod(x,i)==0 && mod(y,i)==0)
        gcd=i;
    end
end

fprintf("GCD:%3u\n",gcd);
fprintf("LCM:%3u\n",(x*y)/gcd);