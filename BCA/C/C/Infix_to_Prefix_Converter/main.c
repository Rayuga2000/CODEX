#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#define max 100

struct stk
{
    char* stack;
    int capacity;
    int top;
};
typedef struct stk Stack;

int isEmpty(Stack* s)
{
    return(s->top==-1);
}
int isFull(Stack* s)
{
    return(s->top>=(s->capacity-1));
}

int priority(char x)
{
    switch (x)
    {
    case '(':
        return(0);
    case '+':
        return(1);
    case '-':
        return(1);
    case '*':
        return(2);
    case '/':
        return(2);
    case '^':
        return(3);
    default:
        return(0);
    }
}

char pop(Stack* s)
{
    if(!isEmpty(s))
    return(s->stack[s->top--]);
    else
    return 'u';
}
void push(Stack* s,char c)
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

void evaluate(Stack* d,Stack* o)
{
    while(o->stack[o->top]!=')')
    {
        push(d,pop(o));
    }
    o->top--;
}
void compare(Stack* d,Stack* o,char c)
{
    if(!isEmpty(o))
    {
        while(priority(o->stack[o->top])>=priority(c) && priority(c)!=0)
        {
            push(d,pop(o));
        }
    }
}

void convert(Stack* d,Stack* o,char exp[])
{
    for(int i=strlen(exp)-1;i>=0;i--)
    {
        if(isdigit(exp[i]) || isalpha(exp[i]))
        {
            push(d,exp[i]);
        }
        else if(ispunct(exp[i]) && exp[i]!='(')
        {
            compare(d,o,exp[i]);
            push(o,exp[i]);
        }
        else if(exp[i]=='(')
        {
            evaluate(d,o);
        }
    }

    for(int i=d->top;i>=0;i--)
    {
        printf("%c ",d->stack[i]);
    }
}

int main()
{
    int opt=1;

    while(opt==1)
    {
        char exp[max];
        printf("Enter the Expression: ");
        scanf("%s",exp);
        int n=strlen(exp);

        Stack* display=(Stack*) malloc(n*sizeof(Stack));
        Stack* operator=(Stack*) malloc(n*sizeof(Stack));

        display->stack=(char*) malloc(n*sizeof(char));
        display->top=-1;
        display->capacity=n;
        
        operator->stack=(char*) malloc(n*sizeof(char));
        operator->top=-1;
        operator->capacity=n;

        convert(display,operator,exp);

        printf("\nDo you want to continue?(1/0): ");
        scanf("%d",&opt);
    }

    return(0);
}
