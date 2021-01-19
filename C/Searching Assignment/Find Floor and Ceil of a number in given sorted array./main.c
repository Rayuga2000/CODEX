#include<stdio.h>

void search(int arr[],int n,int x)
{
    int mid=(n-1)/2,low=0,high=n-1;

    if(x<arr[low])
    {
        printf("Ceil=> %d\nFloor=> undefined\n",arr[0]);
    }
    else if(x>arr[high])
    {
        printf("Ceil=> undefined\nFloor=> %d\n",arr[n-1]);
    }
    else
    {
        if(x>arr[mid])
        {
            low=mid+1;
        }
        else if(x<arr[mid])
        {
            high=mid;
        }
        else
        {
            printf("Ceil=> %d\nFloor=> %d\n",arr[mid],arr[0]);
            return;
        }

        for(int i=low;i<=high;i++)
        {
            if(arr[i]>=x)
            {
                printf("Ceil=> %d\nFloor=> %d\n",arr[i],arr[0]);
                return;
            }
        }
    }
}

int main()
{
    int i,n,x,floor,ceil;

    printf("Enter the range: ");
    scanf("%d",&n);
    int arr[n];

    printf("Enter the data: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Enter the value: ");
    scanf("%d",&x);

    search(arr,n,x);

    return 0;
}