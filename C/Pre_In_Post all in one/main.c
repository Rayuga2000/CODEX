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

int main()
{
    int opt=1,choice;

    while(opt==1)
    {
        printf("Enter your choice: ");
        printf("Infix_to_Postfix(1)");
        printf("Infix_to_Prefix(2)");
        printf("Postfix_Evaluation(3)");
        printf("Prefix_Evaluation(4)");
        scanf("%d",choice);

        char exp[max];
        printf("Enter the Expression: ");
        scanf("%s",exp);
        int n=strlen(exp);

        switch(choice)
        {
        case 1:
            Stack* display=(Stack*) malloc(n*sizeof(Stack));
            Stack* operator=(Stack*) malloc(n*sizeof(Stack));
            
            display->stack=(char*) malloc(n*sizeof(char));
            display->top=-1;
            display->capacity=n;
            
            operator->stack=(char*) malloc(n*sizeof(char));
            operator->top=-1;
            operator->capacity=n;
            
            convert(display,operator,exp);
            break;

        case 2:
            Stack* display=(Stack*) malloc(n*sizeof(Stack));
            Stack* operator=(Stack*) malloc(n*sizeof(Stack));
            
            display->stack=(char*) malloc(n*sizeof(char));
            display->top=-1;
            display->capacity=n;
            
            operator->stack=(char*) malloc(n*sizeof(char));
            operator->top=-1;
            operator->capacity=n;
            
            convert(display,operator,exp);
            break;

        case 3:
            Stack* display=(Stack*) malloc(n*sizeof(Stack));
            
            display->stack=(char*) malloc(n*sizeof(char));
            display->top=-1;
            display->capacity=n;
            
            convert(display,exp);
            break;

        case 4:
            Stack* display=(Stack*) malloc(n*sizeof(Stack));
            
            display->stack=(char*) malloc(n*sizeof(char));
            display->top=-1;
            display->capacity=n;
            
            convert(display,exp);
            break;
        
        default:
            break;
        }
        printf("\nDo you want to continue?(1/0): ");
        scanf("%d",&opt);
    }

    return(0);
}