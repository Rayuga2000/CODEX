#include<stdio.h>

void merge(int arr[],int lb,int mid,int ub)
{
    int i,j,k,n1=mid-lb+1,n2=ub-mid;
    int temp1[n1],temp2[n2];

    for(i=0;i<n1;i++)
    {
        temp1[i]=arr[lb+i];
    }
    for(i=0;i<n2;i++)
    {
        temp2[i]=arr[mid+1+i];
    }

    i=0;j=0;k=lb;

    while(i<n1 && j<n2)
    {
        if(temp1[i]<=temp2[j])
        {
            arr[k++]=temp1[i++];
        }
        else
        {
            arr[k++]=temp2[j++];
        }
    }

    while(i<n1)
    {
        arr[k++]=temp1[i++];
    }
    while(j<n2)
    {
        arr[k++]=temp2[j++];
    }
}
void sort(int arr[],int lb,int ub)
{
    int mid=(lb+ub)/2;

    if(lb<ub)
    {
        sort(arr,lb,mid);
        sort(arr,mid+1,ub);
        merge(arr,lb,mid,ub);
    }
}
int main()
{
    int n;

    printf("Enter the Size: ");
    scanf("%d",&n);
    int arr[n];

    printf("Enter the Array: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    sort(arr,0,n-1);

    printf("Sorted Array is: ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");

    return 0;
}