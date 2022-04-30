%find if the year is a leap year
y=input('Enter the year:');

if mod(y,400)==0
    fprintf('The year is a Leap year');
elseif mod(y,100)==0
    fprintf('The year is not a Leap year');
elseif mod(y,4)==0
    fprintf('The year is a Leap year');
else
     fprintf('The year is not a Leap year');
end
