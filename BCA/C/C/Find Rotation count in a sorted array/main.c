#include<stdio.h>

int main()
{
    int i,n,pos=0;

    printf("Enter the size: ");
    scanf("%d",&n);
    int arr[n];

    printf("Enter the Numbers: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    int min=arr[0];
    for(i=1;i<n;i++)
    {
        if(min>arr[i])
        {
            min=arr[i];
            pos=i;
        }
    }
    printf("The array rotated %d times\n",n-pos);

    return 0;
}
