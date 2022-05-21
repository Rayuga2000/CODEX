clc

arr=[32,6,34,22,98,77,45,99,12];
arr=sort(arr);

fprintf('Sorted array:');
fprintf(' %u',arr);
target=input('\nEnter the Value to search: ');
temp=BinarySearch(arr,target,1,length(arr));

if temp ~= 0
    fprintf('\nThe position of the element is:%3u\n',temp);
else
    fprintf('\nThe element is not present\n');
end