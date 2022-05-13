function x=BinarySearch(arr,target,first,last)

    mid=(first+last)/2;
    
    if arr[mid]==target
        x=mid;
    elseif arr[mid]>target
        x=BinarySearch(arr,target,first,mid-1);
    elseif arr[mid]<target
        x=BinarySearch(arr,target,mid+1,last);
    else
        x=-1;
    end
    
end