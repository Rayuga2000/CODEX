#include<stdio.h>

int main()
{
    int i,n,s1,s2=0;

    printf("Enter the size: ");
    scanf("%d",&n);
    int arr[n];

    s1=(n+1)+n*(n+1)/2;

    printf("Enter the numbers: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        s2+=arr[i];
    }

    if(s1!=s2)
    {
        printf("The missing Number is: %d\n",s1-s2);
    }
    else
    {
        printf("There is no missing Number\n");
    }

    return 0;
}
