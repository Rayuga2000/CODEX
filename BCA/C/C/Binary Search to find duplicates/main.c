#include<stdio.h>

void binarySearch(int arr[],int low,int high,int val)
{
    int start=-1,end=-1,n=high;

    while(low<=high)
    {
        int mid=(high+low)/2;
        if(val<arr[mid])
        {
            high=--mid;
        }
        else if(val==arr[mid])
        {
            start=mid;
            high=--mid;
        }
        else
        {
            low=++mid;
        }
    }

    low=0,high=n;
    while(low<=high)
    {
        int mid=(high+low)/2;
        if(val<arr[mid])
        {
            high=--mid;
        }
        else if(val==arr[mid])
        {
            end=mid;
            low=++mid;
        }
        else
        {
            low=++mid;
        }
    }

    printf("%d appeared in position ",val);
    if(start!=-1 && end!=-1)
    {
        for(int i=0;i+start<=end;i++)
        {
            if(i>0)
            {
                printf(",");
            }
            printf("%d",i+start);
        }
        printf("\n");
    }
    else
    {
        printf("The value is not in the array\n");
    }    
}
int main()
{
    int i,n,val;

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

    binarySearch(arr,0,n,val);

    return 0;
}