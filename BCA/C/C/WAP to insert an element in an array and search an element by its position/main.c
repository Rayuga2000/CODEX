#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i,n,*arr,pos,val;

    printf("Enter the size: ");
    scanf("%d",&n);

    arr=(int*)malloc(n*sizeof(int));

    printf("Enter the Array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Enter the position and value: ");
    scanf("%d%d",&pos,&val);

    if(pos<0 || pos>n)
    {
        printf("something Went Wrong");
    }
    else
    {
        arr=realloc(arr,(n+1)*sizeof(int));

        for(i=n;i>=pos-1;i--)
        {
            arr[i+1]=arr[i];
        }

        arr[pos-1]=val;

        printf("New Array is: ");
        for(i=0;i<n+1;i++)
        {
            printf("%d ",arr[i]);
        }
        printf("\n");
    }

    return 0;
}
