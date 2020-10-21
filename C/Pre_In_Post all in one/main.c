#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include "main1.c"
#define max 100

int func()
{
    int opt=1,choice;

    while(opt==1)
    {
        printf("Enter your choice: ");
        printf("Infix_to_Postfix(1)");
        printf("Infix_to_Prefix(2)");
        printf("Postfix_Evaluation(3)");
        printf("Prefix_Evaluation(4)");
        scanf("%d",&choice);

        switch(choice)
        {
        case 1:            
            
            break;

        case 2:
            
            break;

        case 3:
            main();
            break;

        case 4:
            
            break;
        
        default:
            break;
        }
        printf("\nDo you want to continue?(1/0): ");
        scanf("%d",&opt);
    }

    return(0);
}