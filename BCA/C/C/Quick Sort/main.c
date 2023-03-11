#include<stdio.h>

int partition(int arr[],int start,int end)
{
    int temp,pivot=arr[start],lb=start;

    while(start<end)
    {
        while(arr[start]<=pivot)
        {
            start++;
        }
        while(arr[end]>pivot)
        {
            end--;
        }

        if(start<end)
        {
            temp=arr[start];
            arr[start]=arr[end];
            arr[end]=temp;
        }
    }

    temp=arr[lb];
    arr[lb]=arr[end];
    arr[end]=temp;

    return end;
}
void quicksort(int arr[],int lb,int ub)
{
    int pos;

    if(lb<ub)
    {
        pos=partition(arr,lb,ub);
        quicksort(arr,lb,pos-1);
        quicksort(arr,pos+1,ub);
    }
}

int main()
{
    int n;
    printf("Enter the size: ");
    scanf("%d",&n);
    int arr[n];

    printf("Enter the Array: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    quicksort(arr,0,n-1);

    printf("New array is=> ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");

    return 0;
}