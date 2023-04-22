#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    char data;
    struct node *next;
}node;

node *front=NULL,*temp,*rear=NULL;

int isNULL(){
    if(front==NULL){
        printf("\nStack Underflow");
        return 1;
    }
    return 0;
}

void enqueue(char data){
    if(front==NULL){
        front=(node*)malloc(sizeof(node));
        front->data=data;
        rear=front;
    }
    else{
        rear->next=(node*)malloc(sizeof(node));
        rear=rear->next;       
        rear->data=data;
    }
    rear->next=NULL;
}

void display(){
    if(!isNULL()){
        temp=front;
        printf("Queue: ");
        while(temp!=NULL){
            printf("%c",temp->data);
            temp=temp->next;
        }
    }
}

int main(){
    int i=0;
    char str[20];

    printf("Enter infix notation: ");
    scanf("%s",str);

    enqueue(str[i++]);
    while(str[i]!='\0'){
        char temp=str[i++];
        enqueue(str[i++]);
        enqueue(temp);
    }
    display();
}