#include<stdio.h>

int rear=-1,front=-1,size;

int isFull(){
    if((rear+1)%size==front){
        printf("\nQueue overflow");
        return 1;
    }
    else{
        return 0;
    }
}

int isNull(){
    if(front==-1){
        printf("Queue undeflow");
        return 1;
    }
    return 0;
}

void enqueue(int *queue){
    if(!isFull()){
        rear=(rear+1)%size;
        printf("Enter data: ");
        scanf("%d",&queue[rear]);            
    }

    if(front==-1){
        front++;
    }
}

void dequeue(int *queue){
    if(!isNull()){
        if(front==rear){
            printf("deleted Front: %d",queue[front]);
            front=-1;
            rear=-1;
        }
        else{
            printf("deleted Front: %d",queue[front]);
            front=(front+1)%size;
        }
    }
}

void peek(int *queue){
    if(!isNull(queue)){
        printf("Front: %d",queue[front]);
    }
}

void display(int *queue){
    int temp=front;

    while(temp!=rear){
        printf("%d ",queue[temp]);
        temp=(temp+1)%size;
    }
    printf("%d",queue[temp]);
}

int main(){
    int n,ch=0;

    printf("Enter Queue size: ");
    scanf("%d",&size);
    int queue[size];

    while(ch!=5){
        printf("\n1)Enqueue\n2)Dequeue\n3)Peek\n4)Display\n5)Exit\nEnter choice: ");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:
                printf("Enter no. of data: ");
                scanf("%d",&n);

                if(n>size){
                    printf("no. of data more than available queue size");
                    break;
                }
                else{
                    for(int i=0;i<n;i++){
                        enqueue(queue);
                    }
                }
                break;
            case 2:
                dequeue(queue);
                break;
            case 3:
                peek(queue);
                break;
            case 4:
                display(queue);
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