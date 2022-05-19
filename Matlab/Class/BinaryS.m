%Binary Search with loop
function x=BinaryS(arr,target,first,last) 
    x=0;
    while(first<=last)
        mid=floor((first+last)/2);
        
        if arr(mid)==target
            x=mid;
            break;
        elseif arr(mid)>target
            last=mid-1;
        elseif arr(mid)<target
            first=mid+1;            
        end  
    end
end