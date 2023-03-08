#include<stdio.h>

int main()
{
    int i,j,n;

    printf("Enter the range: ");
    scanf("%d",&n);

    int arr[n];

    printf("Enter the Array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0;i<n-1;i++)
    {
        int index=i;
        for(j=i+1;j<n;j++)
        {
            if(arr[j]<arr[index])
            {
                index=j;
            }
        }

        int temp=arr[i];
        arr[i]=arr[index];
        arr[index]=temp;
    }

    printf("The New Array is=> ");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");

    return 0;
}