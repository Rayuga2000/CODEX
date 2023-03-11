#include<stdio.h>
#define MAX 5

struct stk
{
    int top;
    int stack[MAX];
}s;

void push()
{
    int value;

    if (s.top==MAX-1)
    {
        printf("\n...Stack Overflow...");
    }
    else
    {
        printf("\nEnter the element to insert: ");
        scanf("%d",&value);

        s.top++;
        s.stack[s.top]=value;
    }
    return;
}
void pop()
{
    if(s.top==-1)
    {
        printf("\n...Stack Underflow...");
    }
    else
    {
        printf("\nThe poped item is: %d",s.stack[s.top]);
        s.top--;
    }
}
void peep()
{
    printf("No. of elements in Stack are: %d\n",s.top+1);
    printf("Top element of the Stack is: %d\n",s.stack[s.top]);

    return;
}
void update()
{
    int value;

    printf("Enter the value to update: ");
    scanf("%d",&value);

    s.stack[s.top]=value;

    printf("ToP of Stack is: %d",s.stack[s.top]);

    return;
}

int main()
{
    int choice,option=1;
    s.top=-1;

    while(option)
    {
        printf("<=================>");
        printf("\nPUSH-> 1");
        printf("\nPOP-> 2");
        printf("\nPEEP-> 3");
        printf("\nUPDATE-> 4");
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
        
        case 3:
            peep();
            break;
        
        case 4:
            update();
            break;
        
        default:
            printf("Wrong Input");
            break;
        }

        printf("\nDo you want to continue?(1/0): ");
        scanf("%d",&option);
    }
    
    return 0;
}
