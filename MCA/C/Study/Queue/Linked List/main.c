#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node *next;
}node;

node *head=NULL,*temp,*front=NULL,*rear=NULL;

int isNULL(){
    if(front==NULL){
        printf("\nStack Underflow");
        return 1;
    }
    return 0;
}

void enqueue(){
    int n;
    printf("\nEnter no. of data: ");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        printf("Enter Data: ");
        if(head==NULL){
            head=(node*)malloc(sizeof(node));
            scanf("%d",&head->data);
            rear=head;
        }
        else{
            rear->next=(node*)malloc(sizeof(node));
            rear=rear->next;       
            scanf("%d",&rear->data);
        }
    }
    rear->next=NULL;
    front=head;
}

void dequeue(){
    if(!isNULL()){
        if(front==rear){
            printf("\nDequeued %d",front->data);
            free(front);
            front=NULL;
            rear=NULL;
        }
        else{
            printf("\nDequeued %d",front->data);
            temp=front;
            front=front->next;
            free(temp);            
        }
    }
}

void peek(){
    if(!isNULL()){
        printf("Front of Queue: %d",front->data);
    }
}

void display(){
    if(!isNULL()){
        temp=front;
        printf("Queue: ");
        while(temp!=NULL){
            printf("%d ",temp->data);
            temp=temp->next;
        }
    }
}

int main(){
    int ch=0;

    while(ch!=5){
        printf("\n\n1)Insert\n2)Delete\n3)Peek\n4)Display\n5)Exit\nEnter a choice: ");
        scanf("%d",&ch);

        switch(ch)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            peek();
            break;
        case 4:
            display();
            break;
        case 5:
            printf("\nBye---");
            break;
    
        default:
            break;
        }
    }
}