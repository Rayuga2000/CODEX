#include<stdio.h>

int main()
{
    int n,v,flag=0,first,last;

    printf("Enter the range: ");
    scanf("%d",&n);

    int arr[n];

    printf("Enter the data: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Enter the value to search: ");
    scanf("%d",&v);

    for(int i=0;i<n;i++)
    {
        if(v==arr[i])
        {
            (flag==0)?(first=i):(last=i);
            flag++;
        }
    }

    printf("The First occurence of element %d is at index: %d\nThe Last occurence of element %d is at index: %d\n",v,first+1,v,last+1);

    return 0;
}
