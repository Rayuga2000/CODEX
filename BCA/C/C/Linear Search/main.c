#include<stdio.h>

int main()
{
    int n,v;
    printf("Enter the size: ");
    scanf("%d",&n);
    int arr[n];

    printf("Enter the data elements: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Enter the value to search: ");
    scanf("%d",&v);

    for(int i=0;i<n;i++)
    {
        if(arr[i]==v)
        {
            printf("The value is in position %d\n",i+1);
            break;
        }
        else if(i==n-1)
        {
            printf("The value is not in the array\n");
        }
    }
}
