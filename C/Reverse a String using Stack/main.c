#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define max 20

struct stk
{
    char* stack;
    int top;
};
struct stk* createStack(int n)
{
    struct stk* s=(struct stk*) malloc(sizeof(struct stk));
    s.top=-1;
    s.stack=(char*) malloc(n*sizeof(char));
    return s;
}

void pop(struct stk* s,char name[])
{
    if(s.top==-1)
    {
        printf("\nStack Underflow");
    }
    else
    {
        for(int i=0;i<strlen(name);i++)
        {
            name[i]=s.stack[s.top];
            s.top--;
        }
    }
}
void push(struct stk* s,char name[])
{
    if(s.top==strlen(name)-1)
    {
        printf("\nStack Overflow");
    }
    else
    {
        for(int i=0;i<strlen(name);i++)
        {
            s.top++;
           s.stack[s.top]=name[i];
        }
    }
    pop(s,name);
}
void reverse(char name[])
{
    push(createStack(strlen(name)),name);

    printf("\nReverse of the Name is==> ");
    for(int i=0;i<strlen(name);i++)
    {
        printf("%c",name[i]);
    }
}

int main()
{
    int opt=1;

    while(opt==1)
    {
        char name[max];
        printf("Enter your name: ");
        scanf("%*c%[^\n]",name);
        reverse(name);
        name[0]='\0';

        printf("\nDo you want to continue?(1/0): ");
        scanf("%d",&opt);
    }

    return(0);
}
