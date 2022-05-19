%Sequential Search
clc

arr=[32,6,34,22,98,77,45,99,12];

target=input('Enter the Value to search: ');

temp=SeqSearch(arr,target);

if temp ~= 0
    fprintf('The position of the element is: %u\n',temp);
else
    fprintf('The element is not present\n');
end