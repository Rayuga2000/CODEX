#include<stdio.h>

int main()
{
    int x,y,*a,*b,temp;

    printf("Enter the values of X & Y: ");
    scanf("%d%d",&x,&y);

    a=&x;
    b=&y;

    temp=*b;
    *b=*a;
    *a=temp;

    printf("Value of X=> %d\nValue of Y=> %d\n",x,y);
    
    return 0;
}