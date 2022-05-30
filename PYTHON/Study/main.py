import numpy as np

def QuickSort(arr,low,high):
    high-=1
    l=low
    h=high
    pivot=l

    while(low<high):
        if(arr[low]<=arr[pivot]):
            low+=1
        elif(arr[high]>arr[pivot]):
            high-=1
        else:
            arr[low],arr[high]=arr[high],arr[low]

    arr[pivot],arr[high]=arr[high],arr[pivot]

    if(pivot!=high):
        QuickSort(arr,l,high-1)
        QuickSort(arr,high+1,h)

    return arr



arr=np.array([16,17,9,5,8,25,27,32])
print(QuickSort(arr,0,8))

