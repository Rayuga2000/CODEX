//program for postfix evaluation using Linked list

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

typedef struct node{
    int data;
    struct node *next;
}node;

node *top=NULL,*temp,*head=NULL;

node* push(int data){
    if(top==NULL){
        head=(node*)malloc(sizeof(node));
        top=head;
        top->data=data;
    }
    else{
        top->next=(node*)malloc(sizeof(node));
        top=top->next;
        top->data=data;
    }
    top->next=NULL;
}

int pop(){
    int value;

    if(top==NULL){
        printf("\nStack Underflow");
    }
    else{
        value=top->data;

        if(top==head){
            free(top);
            top=NULL;
        }
        else{
            temp=head;
            while(temp->next!=top){
                temp=temp->next;
            }
            temp->next=NULL;
            free(top);
            top=temp;        
        }
    }

    return value;
}

int main(){
    int n,num1,num2;
    
    printf("Enter Size: ");
    scanf("%d",&n);

    char str[n];

    printf("Enter postfix expression: ");
    scanf("%s",&str);

    for(int i=0;i<n;i++){
        if(isdigit(str[i])){
            push(str[i]-'0');
        }
        else{
            num2=pop();
            num1=pop();

            switch(str[i])
            {
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
        }
    }
    
    printf("Result: %d",top->data);
    return 0;
}