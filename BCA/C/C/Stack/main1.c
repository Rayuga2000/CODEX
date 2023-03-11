#include<stdio.h>
#define max 5

struct stk
{
    int top;
    int stack[max];
}s;

int isFull()
{
    return s.top==max-1;
}
int isEmpty()
{
    return s.top==-1;
}

void display()
{
    printf("Stack elements are=> ");
    for(int i=0;i<=s.top;i++)
    {
        printf("%d ",s.stack[i]);
    }
}

void push()
{
    int i,n;

    if(!isFull())
    {
        printf("How many data to insert?: ");
        scanf("%d",&n);

        printf("Enter data: ");
        for(i=0;i<n;i++)
        {
            scanf("%d",&s.stack[++s.top]);
        }
        display();
    }
    else
    {
        printf("Stack Overflow");
    }
}
void pop()
{
    if(!isEmpty())
    {
        printf("\nThe poped element is: %d\n",s.stack[s.top]);
        s.top--;
        display();
    }
    else
    {
        printf("Stack Underflow");
    }
}

int main()
{
    int choice,option=1;;
    s.top=-1;

    while(option)
    {
        printf("<=================>");
        printf("\nPUSH-> 1");
        printf("\nPOP-> 2");
        printf("\n<=================>");

        printf("\nEnter Your Choice: ");
        scanf("%d",&choice);
        
        switch(choice)
        {
        case 1:
            push();
            break;

        case 2:
            pop();
            break;
        
        default:
            printf("Wrong Input");
            break;
        }

        printf("\nDo you want to continue?(Y=>1/N=>0): ");
        scanf("%d",&option);
    }

    return 0;
}