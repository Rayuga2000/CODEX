#include<stdio.h>

int main()
{
    int i,j=0,n,rng,val,flag=0;

    printf("Enter the size: ");
    scanf("%d",&n);
    int arr[n],pos[n];

    printf("Enter the Numbers: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Enter the value to find: ");
    scanf("%d",&val);
    printf("Enter the Range: ");
    scanf("%d",&rng);

    for(i=0;i<rng;i++)
    {
        if(arr[i]==val)
        {
            flag++;
            pos[j++]=i;
        }
    }

    if(flag>0)
    {
        printf("%d appeared %d times in position %d",val,flag,pos[0]+1);
        for(i=1;i<j;i++)
        {
            printf(",%d",pos[i]+1);
        }
    }
    else
    {
        printf("The element doesn't exist in the Array");
    }
    printf("\n");

    return 0;
}