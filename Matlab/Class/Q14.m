clc

arr=[32,6,34,22,98,77,45,99,12];
arr=sort(arr);

target=input('Enter the Value to search: ');
fprintf('Sorted array');
arr
temp=BinaryS(arr,target,1,length(arr));

if temp ~= -1
    fprintf('The position of the element is:%3u\n',temp);
else
    fprintf('The element is not present');
end