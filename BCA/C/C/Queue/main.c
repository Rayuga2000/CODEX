#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#define max 5

typedef struct q{
    int rear,front;
    int queue[max];
}Queue;

//if rear=-1 Queue is empty
int isEmpty(Queue* Q)
{
    return(Q->rear==-1);
}
//if rear=max-1 Queue is full
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
        int i=Q->front;
        
        printf("\n%d dequeued",Q->queue[Q->front]);
        
        while(i<Q->rear)
        {
            Q->queue[i]=Q->queue[i+1];//when in a loop this line won't increament the value of i increament/decreament will only happen in the while parenthesis
            i++;
        }
        Q->rear--;//Decrease rear by 1
    }
    else
    {
        printf("\nQueue Underflow");
    }
}
void display(Queue* Q)
{
    for(int i=0;i<=Q->rear;i++)
    {
        printf("%d ",Q->queue[i]);
    }
}

int main()
{
    int ch,n,opt=1;
    
    Queue Q;
    Q.rear=-1;
    Q.front=0;

    while(opt==1)
    {
        printf("#######################");
        printf("\n     Enqueue(1)");
        printf("\n     Dequeue(2)");
        printf("\n     Display(3)");
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
        
        case 3:
            display(&Q);
            break;
        
        default:
            printf("Please insert a choice...");
            break;
        }

        printf("\nDo you want to continue?(1/0): ");
        scanf("%d",&opt);
    }

    return 0;
}