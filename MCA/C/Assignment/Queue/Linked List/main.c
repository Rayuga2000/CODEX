#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node *next;
}node;

node *temp,*front=NULL,*rear=NULL;

int isNULL(){
    if(front==NULL){
        printf("\Queue Underflow");
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
        if(front==NULL){
            front=(node*)malloc(sizeof(node));
            scanf("%d",&front->data);
            rear=front;
        }
        else{
            rear->next=(node*)malloc(sizeof(node));
            rear=rear->next;       
            scanf("%d",&rear->data);
        }
    }
    rear->next=NULL;
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

int main(){
    int ch=0;

    while(ch!=4){
        printf("\n\n1)Insert\n2)Delete\n3)Peek\n4)Exit\nEnter a choice: ");
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
            printf("\nBye---");
            break;
    
        default:
            break;
        }
    }
    return 0;
}