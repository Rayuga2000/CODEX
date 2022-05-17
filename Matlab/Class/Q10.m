%Matrix Multiplication
clc

x=[1 2;
    3 4];
y=[2 3;
    4 5];
z=[];
sum=0;

for i=1:2
    for j=1:2
        for k=1:2
            sum=sum+(x(i,k)*y(k,j));
        end
        z(i,j)=sum;
        sum=0;
    end
end

fprintf('Multiplied Matrix:\n');
for i=1:2
    for j=1:2
        fprintf("%3u",z(i,j));
    end
    fprintf("\n");
end

