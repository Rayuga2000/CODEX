#include<stdio.h>

int main()
{
    int n;

    printf("Enter size: ");
    scanf("%d",&n);

    int arr[n];

    printf("Enter data: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("The peak elements are=>");
    for(int i=0;i<n;i++)
    {
        if(i==0)
        {
            if(arr[i]>arr[i++])
            {
                printf(" %d",arr[i]);
            }  
        }
        else if(i==n-1)
        {
            if(arr[i]>arr[i--])
            {
                printf(" %d",arr[i]);
            }
        }
        else if(arr[i]>=arr[i--] && arr[i]>=arr[i++])
        {
            printf(" %d",arr[i]);
        }
    }

    return 0;
}