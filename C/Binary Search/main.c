#include<stdio.h>

void binarySearch(int arr[],int low,int high,int value)
{
    int mid=(low+high)/2;

    if(low<high)
    {
        if(value<arr[mid])
        {
        binarySearch(arr,low,mid-1,value);
        }
        else if(value==arr[mid])
        {
            printf("The index of the value is==> %d\n",mid+1);
            return;
        }
        else
        {
            binarySearch(arr,mid+1,high,value);
        }
    }
    else
    {
        printf("The value is not there");
        return;
    }
}
int main()
{
    int n,v;
    printf("Enter the size: ");
    scanf("%d",&n);
    int arr[n];

    printf("Enter the data: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Enter the value to find: ");
    scanf("%d",&v);

    binarySearch(arr,0,n-1,v);
}