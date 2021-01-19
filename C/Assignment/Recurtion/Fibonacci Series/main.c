#include<stdio.h>

int fibo(int m)
{
    if(m<=1)
    {
        return(m);
    }
    else
    {
        return(fibo(m-1)+fibo(m-2));
    }
}
int main()
{
    int n,m=0;

    printf("Enter the range: ");
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        printf("%d ",fibo(m));
        m++;
    }
    printf("\n");
    return 0;
}