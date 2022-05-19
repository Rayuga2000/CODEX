function x=SeqSearch(arr,target)
    x=0;
    for i=1:length(arr)
        if target==arr(i)
            x=i;
        end
    end
end