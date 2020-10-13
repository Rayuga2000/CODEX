#include<stdio.h>

int main()
{
    int i,j,k,n,x,v=0,temp;

    printf("Enter size of array: ");
    scanf("%d",&n);

    int arr[n];

    printf("Enter elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }

    int a[arr[n-1]];

    printf("\nThe missing numbers are: ");
    for(i=0;i<n-1;i++)
    {
        x=arr[i+1]-arr[i];
        if(x!=1)
        {
            for(j=0;j<x-1;j++)
            {
                a[v]=++arr[i];
                v++;
            }
        }
    }

    for(k=0;k<v;k++)
    {
        printf("%d ",a[k]);
    }
    printf("\n");

    return(0);
}