function x=SeqSearch(arr,target)
    x=-1;
    for i=1:length(arr)
        if target==arr(i)
            x=i;
        end
    end
end