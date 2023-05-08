#include<stdio.h>

int front=-1,rear=-1;

int isNULL(){
    if(front==-1 || front>rear){
        printf("\nQueue Underflow");
        return 1;
    }
    return 0;
}

int isFULL(int size){
    if(rear+1==size){
        printf("\nQueue Overflow");
        return 1;
    }
    return 0;
}

void enqueue(int size,int *queue){
    if(!isFULL(size)){
        int n;

        printf("\nEnter no. of data: ");
        scanf("%d",&n);

        for(int i=0;i<n;i++){
            printf("Enter Data: ");
            scanf("%d",&queue[++rear]);
        }
        front++;
    }
}

void dequeue(int *queue){
    if(!isNULL()){
        if(front==rear){
            printf("\nDequeued %d",queue[front]);
            front=-1;
            rear=-1;
        }
        else{
            printf("\nDequeued %d",queue[front++]);
        }
    }
}

void peek(int *queue){
    if(!isNULL()){
        printf("Front of Queue: %d",queue[front]);
    }
}

int main(){
    int ch=0,n;
    
    printf("Enter Queue length: ");
    scanf("%d",&n);
    int queue[n];

    while(ch!=4){
        printf("\n\n1)Insert\n2)Delete\n3)Peek\n4)Exit\nEnter a choice: ");
        scanf("%d",&ch);

        switch(ch)
        {
        case 1:
            enqueue(n,queue);
            break;
        case 2:
            dequeue(queue);
            break;
        case 3:
            peek(queue);
            break;
        case 4:
            printf("\nBye---");
            break;
    
        default:
            break;
        }
    }
}