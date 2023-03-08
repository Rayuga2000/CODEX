#include<stdio.h>

void partition(int arr[],int n,int key)
{
    int i,j,s1,s2,temp;

    for(i=0;i<n-1;i++)
    {
        s1=0;
        for(j=0;j<i+1;j++)
        {
            s1+=arr[j];
        }
        s2=0;
        for(j=i+1;j<n;j++)
        {
            s2+=arr[j];
        }

        if(s1==s2)
        {
            printf("The Partitioned Arrays are=> {");
            for(j=0;j<i+1;j++)
            {
                printf(" %d ",arr[j]);
            }
            printf("} and {");
            for(j=i+1;j<n;j++)
            {
                printf(" %d ",arr[j]);
            }
            printf("}\n");

            return;
        }
    }
    if(key>0)
    {
        for(i=0;i<n-1;i++)
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
        partition(arr,n,key-1);
    }
    else if(key==0)
    {
        printf("The array can't be partitioned\n");
    }
}
int main()
{
    int i,n;

    printf("Enter the size: ");
    scanf("%d",&n);
    int arr[n];

    printf("Enter the Array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    partition(arr,n,1);

    return 0;
}
