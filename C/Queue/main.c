#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#define max 5

typedef struct q{
    int rear,front;
    int queue[max];
}Queue;

int isEmpty(Queue* Q)
{
    return(Q->rear==-1);
}
int isFull(Queue* Q)
{
    return(Q->rear==max-1);
}

void enqueue(Queue* Q,int x)
{
    if(!isFull(Q))
    {
        Q->queue[++Q->rear]=x;
    }
    else
    {
        printf("\nQueue Overflow");
    }
}
void dequeue(Queue* Q)
{
    if(!isEmpty(Q))
    {
        printf("\n%d dequeued",Q->queue[++Q->front]);

        if(Q->front==Q->rear)
        {
            Q->front=-1;
            Q->rear=-1;
        }
    }
    else
    {
        printf("\nQueue Underflow");
    }
}

int main()
{
    int ch,n,opt=1;
    
    Queue Q;
    Q.rear=-1;
    Q.front=-1;

    while(opt==1)
    {
        printf("#####################");
        printf("\n    Enqueue(1)");
        printf("\n    Dequeue(2)");
        printf("\n#####################");
        printf("\nEnter your choice: ");
        scanf("%d",&ch);

        switch(ch)
        {
        case 1:
            printf("\nEnter the element: ");
            scanf("%d",&n);
            enqueue(&Q,n);
            break;

        case 2:
            dequeue(&Q);
            break;
        
        default:
            break;
        }

        printf("\nDo you want to continue?(1/0): ");
        scanf("%d",&opt);
    }

    return 0;
}