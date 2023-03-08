#include <stdio.h>

int main()
{
    int i,p,v,n,j,c;

    printf("Enter how many elements to be stored: ");
    scanf("%d",&n);

    int a[n];

    printf("Enter the elements: ");

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Enter your choice 1)insert 2)delete: ");
    scanf("%d",&c);
    switch (c)
    {
    case 1:
        printf("Enter the position and value to be changed: ");
        scanf("%d%d",&p,&v);

    if(p>n)
    {
        printf("Something went wrong please check your input...");
    }
    else
    {
            a[p-1]=v;

            printf("The modified array is==>");

            for(i=0;i<n;i++)
            {
               printf("%d ",a[i]);
            }
    }
        break;

    case 2:
    printf("Enter the data position to delete: ");
    scanf("%d",&p);
    p=p-1;

    for(i=p;i<n-1;i++)
    {
        a[i]=a[i+1];
    }
    printf("The modified array is==>");

            for(i=0;i<n-1;i++)
            {
               printf("%d ",a[i]);
            }
    break;
    
    default:
        break;
    }

    return 0;
}
