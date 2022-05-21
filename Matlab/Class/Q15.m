clc

arr=[16,17,9,5,8,25,27,32];

fprintf('Sorted Array:');
arr=QuickSort(arr,1,length(arr));
fprintf(' %u',arr);
fprintf('\n');