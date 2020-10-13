#include<stdio.h>

int main()
{
    int i,n;

    printf("Enter array size: ");
    scanf("%d",&n);

    int arr[n];

    printf("Enter elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0;i<n;i++)
    {
        int min=arr[0];
        if(min>arr[i])
        {
            printf("No. of rotations needed==> %d\n",i);
            break;
        }
    }

    return(0);
}