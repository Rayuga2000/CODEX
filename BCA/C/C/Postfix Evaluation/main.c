#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
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
        return((int)pow((double)a,(double)b));
        break;
    
    default:
        printf("Wrong Operator");
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
    {
        printf("Stack Underflow");
        exit(1);
    }
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
            int op2=pop(d),op1=pop(d);
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