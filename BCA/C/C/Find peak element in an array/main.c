#include<stdio.h>

void findPeak(int arr[],int n)
{
    int i,j=0,peak[n];

    if(arr[0]>=arr[1])
    {
        peak[j++]=arr[0];
    }
    
    if(arr[n-1]>=arr[n-2])
    {
        peak[j++]=arr[n-1];
    }

    for(i=1;i<n-1;i++)
    {
        if(arr[i]>=arr[i+1] && arr[i]>=arr[i-1])
        {
            peak[j++]=arr[i];
        }
    }

    printf("Peak elements are=> ");
    for(i=0;i<j;i++)
    {
        printf("%d ",peak[i]);
    }
    printf("\n");
}
int main()
{
    int i,n;

    printf("Enter size: ");
    scanf("%d",&n);

    int arr[n];

    printf("Enter data: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    if(n==1)
    {
        printf("Peak element is=> %d\n",arr[0]);
    }
    else
    {
        findPeak(arr,n);
    }

    return 0;
}