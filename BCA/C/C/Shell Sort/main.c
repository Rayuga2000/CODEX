#include<stdio.h>

void shellSort(int arr[],int n)
{
    int gap,temp;
    
    for(gap=n/2;gap>0;gap/=2)
    {
        for(int i=0;i<n-gap;i++)
        {
            if(arr[i]>arr[i+gap])
            {
                temp=arr[i];
                arr[i]=arr[i+gap];
                arr[i+gap]=temp;
            }
        }
    }
}

int main()
{
    int n,i;

    printf("Enter the size: ");
    scanf("%d",&n);
    int arr[n];

    printf("Enter the Array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    shellSort(arr,n);

    printf("New Array is: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");

    return 0;
}