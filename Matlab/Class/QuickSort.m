function x=QuickSort(arr,low,high)
    l=low;
    h=high;
    pivot=l;
    
    while(low<=high)
        if arr(low)<=arr(pivot)
            low=low+1;
        elseif arr(high)>arr(pivot)
            high=high-1;
        else
            temp=arr(low);
            arr(low)=arr(high);
            arr(high)=temp;
        end
    end
    
    temp=arr(pivot);
    arr(pivot)=arr(high);
    arr(high)=temp;
    
    if pivot~=high
        arr=QuickSort(arr,l,high-1);
        arr=QuickSort(arr,high+1,h);
    end
    
    x=arr;
end