#include<stdio.h>

int binarySearch(int arr[],int low,int high,int val)
{
    while(low<=high)
    {
        int mid=(low+high)/2;

        if(val<arr[mid])
        {
            high=--mid;
        }
        else if(val==arr[mid])
        {
            return mid;
        }
        else
        {
            low=++mid;
        }
    }

    return -1;
}
int main()
{
    int i,n,val,pos;

    printf("Enter the size: ");
    scanf("%d",&n);
    int arr[n];

    printf("Enter the data: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Enter the value to find: ");
    scanf("%d",&val);

    pos=binarySearch(arr,0,n,val)+1;

    if(pos)
    {
        printf("%d is in position %d\n",val,pos);
    }
    else
    {
        printf("%d isn't present in the array\n",val);
    }

    return 0;
}