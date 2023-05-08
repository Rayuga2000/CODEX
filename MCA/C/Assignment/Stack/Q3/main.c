//stack using linked list

#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node *next;
}node;

node *top=NULL,*temp,*head=NULL;

void push(){
    int n;

    printf("\nEnter no. of data to push: ");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        printf("Enter data: ");
        if(top==NULL){
            head=(node*)malloc(sizeof(node));
            top=head;
            scanf("%d",&top->data);
        }
        else{
            top->next=(node*)malloc(sizeof(node));
            top=top->next;
            scanf("%d",&top->data);
        }            
    }
    top->next=NULL;
}

void pop(){
    if(top==NULL){
        printf("\nStack Underflow");
    }
    else if(top==head){
        printf("poped %d\n",top->data);
        free(top);
        top=NULL;
    }
    else{
        printf("poped %d\n",top->data);
        temp=head;
        while(temp->next!=top && temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=NULL;
        free(top);
        top=temp;        
    }
}

void peek(){
    if(top==NULL){
        printf("\nStack is empty");
    }
    else{
        printf("Top of Stack: %d",top->data);
    }
}

int main(){
    int ch=0;

    while(ch!=4){
        printf("\n1)Push\n2)Pop\n3)Peek\n4)Exit\nEnter a Choice: ");
        scanf("%d",&ch);

        switch(ch){
            case 1:
                push();          
                break;
            case 2:
                pop();
                break;
            case 3:
                peek();
                break;
            case 4:
                printf("\nBye...");
                break;

            default:
                break;
        }
    }
    
    return 0;
}