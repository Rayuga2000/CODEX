#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node* next;
}node;

node *rear=NULL,*front=NULL,*temp;

int isNull(){
    if(front==NULL){
        printf("Queue undeflow");
        return 1;
    }
    return 0;
}

void enqueue(){
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

void dequeue(){
    if(!isNull()){
        temp=front;
        if(front==rear){
            printf("deleted Front: %d",front->data);
            front=NULL;
            rear=NULL;
        }
        else{
            printf("deleted Front: %d",front->data);
            front=front->next;
            rear->next=front;
        }
        free(temp);
    }
}

void peek(){
    if(!isNull()){
        printf("Front: %d",front->data);
    }
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
    int n,ch=0;

    while(ch!=5){
        printf("\n1)Enqueue\n2)Dequeue\n3)Peek\n4)Display\n5)Exit\nEnter choice: ");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:
                printf("Enter no. of data: ");
                scanf("%d",&n);

                for(int i=0;i<n;i++){
                    enqueue();
                }
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
                printf("\nBye...");
                break;

            default:
                break;
        }
    }

    return 0;
}