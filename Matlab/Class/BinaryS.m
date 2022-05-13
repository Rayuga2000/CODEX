function x=BinaryS(arr,target,first,last)    
    while(first<=last)
        mid=(first+last)/2;
        
        if arr[mid]==target
            x=mid;
            break;
        elseif arr[mid]>target
            last=mid-1;
        elseif arr[mid]<target
            first=mid+1;
        else
            x=-1;
        end
        
    end
end