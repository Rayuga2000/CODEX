//reverse a linked list
#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node* next;
}node;

node *head=NULL,*tail,*prev,*curr,*next;

void reverse(){
    curr=head;
    next=curr->next;
    prev=curr;
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

void insert(){
    for(int i=0;i<3;i++){
        printf("Enter data: ");
        if(head==NULL){
            head=(node*)malloc(sizeof(node));
            scanf("%d",&head->data);
            tail=head;
        }
        else{
            tail->next=(node*)malloc(sizeof(node));
            tail=tail->next;
            scanf("%d",&tail->data);
        }
        tail->next=NULL;
    }
}

void display(){
    node *temp=head;
    printf("Linked List: ");
    while(temp->next!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("%d ",temp->data);
}

int main(){
    node *h1,*h2;

    printf("List--->\n");
    insert();
    display();

    reverse();

    printf("\n\nReversed List--->\n");
    display();

    return 0;
}