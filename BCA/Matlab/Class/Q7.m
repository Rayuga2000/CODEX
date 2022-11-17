%find sum of array elements
clc;

x=input('Enter the array: ');
sum=0;

for i=1:length(x)
    sum=sum+x(i);
end

fprintf('The sum is: %u\n',sum);