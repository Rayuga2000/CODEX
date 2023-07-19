#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

typedef struct node{
    int data;
    struct node *next;
}node;

node *top=NULL,*head=NULL,*temp;

void push(int n){
    if(top==NULL){
        top=(node*)malloc(sizeof(node));
        head=top;
    }
    else{
        top->next=(node*)malloc(sizeof(node));
        top=top->next;
    }
    top->data=n;
    top->next=NULL;
}

int pop(){
    int value;

    if(top==NULL){
        printf("Stack underflow");
    }
    else{
        value=top->data;
        if(head==top){
            free(top);
            top=NULL;
            head=NULL;
        }
        else{
            temp=head;
            while(temp->next!=top){
                temp=temp->next;
            }
            free(top);
            top=temp;
        }        
    }
    return value;
}

int main(){
    char str[10];
    int i=0,num1,num2;

    printf("Enter postfix expression: ");
    scanf("%s",&str);

    while(str[i]!='\0'){
        if(isdigit(str[i])){
            push(str[i]-'0');
            i++;
        }
        else{
            num2=pop();
            num1=pop();

            switch (str[i]){
                case '+':
                    push(num1+num2);
                    break;
                case '-':
                    push(num1-num2);
                    break;
                case '*':
                    push(num1*num2);
                    break;
                case '/':
                    push(num1/num2);
                    break;

                default:
                    break;
            }
            i++;
        }
    }

    printf("Result: %d",pop());

    return 0;
}