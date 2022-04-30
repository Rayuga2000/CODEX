%find sum of array elements
x=[1 2 3 4 5 6];
sum=0;

for i=1:length(x)
    sum=sum+x(i);
end

fprintf('The sum is:%u\n',sum);