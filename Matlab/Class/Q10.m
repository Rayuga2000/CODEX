%Matrix Multiplication
clc

n=input('Enter range: ');
x=input('Enter the 1st Matrix: ');
y=input('Enter the 2nd Matrix: ');

z=[];
sum=0;

for i=1:n
    for j=1:n
        for k=1:n
            sum=sum+(x(i,k)*y(k,j));
        end
        z(i,j)=sum;
        sum=0;
    end
end

fprintf('\nMultiplied Matrix:\n');
for i=1:n
    for j=1:n
        fprintf(" %u",z(i,j));
    end
    fprintf("\n");
end

