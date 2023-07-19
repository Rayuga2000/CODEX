//reverse a linked list
#include<stdio.h>
#include<stdlib.h>

//create a node structure
typedef struct node{
    int data;
    struct node *next;
}node;

node *head=NULL,*temp,*prev,*curr,*next;

void reverse(){
    curr=head;
    prev=curr;
    next=curr->next;
    curr=next;
    next=next->next;
    prev->next=NULL;

    while(next!=NULL){
        curr->next=prev;
        prev=curr;
        curr=next;
        next=next->next;
    }
    curr->next=prev;
    head=curr;
}
//insert data in node
void insert(){
    for(int i=0;i<3;i++){
        printf("Enter Data: ");
        if(head==NULL){
            head=(node*)malloc(sizeof(node));
            temp=head;
        }
        else{
            temp->next=(node*)malloc(sizeof(node));
            temp=temp->next;
        }
        scanf("%d",&temp->data);
        temp->next=NULL;
    }
}

void display(){
    temp=head;
    
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
}

int main(){
    insert();
    printf("\nLinked List: ");
    display();

    reverse();
    printf("\nReversed Linked List: ");
    display();

    return 0;
}