clc;

prev1=0;
prev2=1;
i=1;

n=input('Enter the range: ');
fprintf('Fibonacci series are: ');

if n-1==0
    fprintf('0');
elseif n-1==1
    fprintf('0 1');
else
    fprintf('0 1');
    while i<n-2
        new=prev1+prev2;
        fprintf('%3u',new);
        prev1=prev2;
        prev2=new;
        i=i+1;
    end
    fprintf('\n');
end

