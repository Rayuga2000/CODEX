#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#define max 100

struct stk{
    int top,capacity;
    char stack[max];
}d;
typedef struct stk Stack;

int isEmpty(Stack* s)
{
    return(s->top==-1);
}
int isFull(Stack* s)
{
    return(s->top>=(s->capacity-1));
}

int countDigit(char c[],int i)
{
    int x=0;
    for(int j=i-1;j>=0;j--)
    {
        x++;
    }
    return(x/2);
}

int getResult(int a,char x,int b)
{
    switch(x)
    {
    case '+':
        return(a+b);
        break;
    case '-':
        return(a-b);
        break;
    case '*':
        return(a*b);
        break;
    case '/':
        return(a/b);
        break;
    case '^':
        return(a^b);
        break;
    
    default:
        break;
    }
}

int pop(Stack* s)
{
    if(!isEmpty(s))
    {
        return(s->stack[s->top--]);
    }
    else
    printf("Stack Overflow");
}
void push(Stack* s,int c)
{
    if(!isFull(s))
    {
        s->stack[++s->top]=c;
    }
    else
    {
        printf("\nStack Overflow");
    }
}

void convert(Stack* d,char c[])
{
    for(int i=0;i<=strlen(c);i++)
    {
        if(isdigit(c[i]))
        {
            push(d,c[i]-'0');
        }
        else if(ispunct(c[i]))
        {
            int op1=0,op2=0;
            for(int j=0;j<countDigit(c,i);j++)
            {
                op2=op2*10+pop(d);
            }
            for(int j=0;j<countDigit(c,i);j++)
            {
                op1=op1*10+pop(d);
            }
            push(d,getResult(op1,c[i],op2));
        }
    }

    printf("%d",d->stack[d->top]);
}
int main()
{
    int opt=1;
    char exp[max];

    while(opt)
    {
        printf("Enter the Expression: ");
        scanf("%s",exp);

        d.top=-1;
        d.capacity=strlen(exp);
        convert(&d,exp);

        printf("\nDo you want to continue?(1/0): ");
        scanf("%d",&opt);
    }
}