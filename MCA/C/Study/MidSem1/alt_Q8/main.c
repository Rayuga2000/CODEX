#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node* next;
}node;

node *rear,*front,*temp;

int isNull(){
    if(front==NULL){
        printf("Queue undeflow");
        return 1;
    }
    return 0;
}

node* enqueue(){
    rear=NULL;
    front=NULL;

    for(int i=0;i<3;i++){
        if(front==NULL && rear==NULL){
            rear=(node*)malloc(sizeof(node));
            front=rear;
        }
        else{
            rear->next=(node*)malloc(sizeof(node));
            rear=rear->next;
        }
        printf("Enter data: ");
        scanf("%d",&rear->data);
        rear->next=front;
    }

    return front;
}

void display(){
    if(!isNull()){
        temp=front;

        printf("Queue: ");
        while(temp->next!=front){
            printf("%d ",temp->data);
            temp=temp->next;
        }
        printf("%d",temp->data);
    }
}

int main(){
    node *Q1,*Q2;

    printf("Enter CQ1-->\n");
    Q1=enqueue();

    printf("\nEnter CQ2-->\n");
    Q2=enqueue();

    temp=Q1;
    while(temp->next!=Q1){
        temp=temp->next;
    }
    temp->next=Q2;

    temp=Q2;
    while(temp->next!=Q2){
        temp=temp->next;
    }
    rear=temp;
    front=Q1;
    rear->next=front;

    printf("Merged ");
    display();

    return 0;
}