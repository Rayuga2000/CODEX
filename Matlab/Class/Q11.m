%Odd Even Addition from Array
clc
close all;

x=[1,2,4,5,9,10,12,13,14];
even=0;odd=0;

for i=x
    if mod(i,2)==0
        even=even+i;
    else
        odd=odd+i;
    end
end

fprintf("EvenSum:%3u\n",even);
fprintf("OddSum:%3u\n",odd);
    