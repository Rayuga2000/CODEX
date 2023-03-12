#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node* next;
}node;

node* createList(node *head){
    head=(node*)malloc(sizeof(node));
    printf("Enter data: ");
    scanf("%d",&head->data);
    head->next=NULL;

    return head;
}

node* insertHead(int n,node *head){
    int i=1;
    node *curr;
    
    while(i<=n){
        curr=(node*)malloc(sizeof(node));
        curr->next=head;
        printf("Enter data: ");
        scanf("%d",&curr->data);
        head=curr;
        i++;
    }

    return head;
}

void insertMid(int n,node *head){
    node *temp=head;

    while(temp->data!=n){
        temp=temp->next;
    }

    node *curr=(node*)malloc(sizeof(node));
    printf("Enter data to insert: ");
    scanf("%d",&curr->data);

    curr->next=temp->next;
    temp->next=curr;
}

void insertTail(int n,node *head){
    int i=1;
    node *tail=head;

    while(tail->next!=NULL){
        tail=tail->next;
    }
    
    while(i<=n){
        tail->next=(node*)malloc(sizeof(node));
        tail=tail->next;
        printf("Enter data for node%d: ",i);
        scanf("%d",&tail->data);
        tail->next=NULL;
        i++;
    }
}

node* deleteHead(node *head){
    node *temp;
    temp=head;

    head=head->next;
    free(temp);
    printf("Head Node deleted");

    return head;
}

void deleteMid(int n,node *head){
    node *temp,*curr;
    temp=head;

    while(temp->data!=n){
        curr=temp;
        temp=temp->next;
    }

    curr->next=temp->next;
    free(temp);
    printf("Middle Node deleted");
}

void deleteTail(node *head){
    node *temp,*curr;
    temp=head;

    while(temp->next!=NULL){
        curr=temp;
        temp=temp->next;
    }

    curr->next=NULL;
    free(temp);
    printf("Tail Node deleted");
}

void displayList(node *head){
    node *temp;
    temp=head;

    printf("\nLinked list: ");
    while(temp->next!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("%d ",temp->data);
}