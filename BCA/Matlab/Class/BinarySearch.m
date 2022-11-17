%Binary Search with Recursion
function x=BinarySearch(arr,target,first,last)
    x=0;
    mid=floor((first+last)/2);
    
    if(first<=last)
        if arr(mid)==target
            x=mid;
        elseif arr(mid)>target
            x=BinarySearch(arr,target,first,mid-1);
        elseif arr(mid)<target
            x=BinarySearch(arr,target,mid+1,last);
        end
    end
end