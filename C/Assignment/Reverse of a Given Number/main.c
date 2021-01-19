#include<stdio.h>

void reverse(int n)
{
    int s=0,r;

    while(n>0)
    {
        r=n%10;
        s=s*10+r;
        n=n/10;
    }

    printf("Reverse of the Number is=> %d\n",s);
}
int main()
{
    int n;
    printf("Enter the Number: ");
    scanf("%d",&n);

    reverse(n);
    return 0;
}