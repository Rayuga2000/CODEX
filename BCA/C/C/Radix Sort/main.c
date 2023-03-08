#include<stdio.h>

void countSort(int arr[],int n,int pos)
{
    int count[10]={},temp[n];

    for(int i=0;i<n;i++)
    {
        count[(arr[i]/pos)%10]++;/*get 1's,10's,100's,...,n's digit of the number from arr[] and increase
        the corresponding index element by 1 in count[]*/

    }
    for(int i=1;i<10;i++)
    {
        count[i]+=count[i-1];//at each index store the sum of previous index and current index elements
    }

    for(int i=n-1;i>=0;i--)
    {
        --count[(arr[i]/pos)%10];
        temp[count[(arr[i]/pos)%10]]=arr[i];
        /* first get 1's,10's,100's,...,n's digit of the number from
        arr[] and decrease the corresponding index element by 1 in count[] then, take that element as index
        of temp[] and insert the arr[i] in there*/
    }

    for(int i=0;i<n;i++)
    {
        arr[i]=temp[i];//overwrite arr[] with temp[]
    }
}

void radixSort(int arr[],int n)
{
    int max=arr[0];

    for(int i=0;i<n;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
    }

    for(int pos=1;max/pos>0;pos*=10)//run loop for total number of digits in max
    {
        countSort(arr,n,pos);
    }
}

int main()
{
    int n;
    printf("Enter the size: ");
    scanf("%d",&n);
    int arr[n];

    printf("Enter the Array: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    radixSort(arr,n);

    printf("The new Array is: ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");

    return 0;
}