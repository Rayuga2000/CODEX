/*
Logic==> 
Enqueue=> just like normal Queue(rear+1);
Dequeue=> first increase front by 1 and check if rear is at max-1 or not, if true then change rear to -1
*/

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#define max 5

typedef struct q{
    int rear,front;
    int queue[max];
}Queue;

//if rear=-1 and front=0 Queue is empty
int isEmpty(Queue* Q)
{
    return(Q->rear==-1 && Q->front==0);
}
//if rear=max-1 or rear=-1 and rear=front-1 Queue is full
int isFull(Queue* Q)
{
    return(Q->rear==max-1 || (Q->rear!=-1 && Q->rear==Q->front-1));
}

void enqueue(Queue* Q,int x)
{
    if(!isFull(Q))
    {
        Q->queue[++Q->rear]=x;//increase rear by 1 then add the value
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
        printf("\n%d dequeued",Q->queue[Q->front++]);
        if(Q->rear==max-1)
        {
            Q->rear=-1;
        }
    }
    else
    {
        printf("\nQueue Underflow");
    }
}
void display(Queue* Q)
{
    int i;

    if(Q->rear > Q->front)//if rear greater than front print the array from front to rear
    {
        for(i=Q->front;i<=Q->rear;i++)
        {
            printf("%d ",Q->queue[i]);
        }
    }
    if(Q->rear < Q->front)//if rear smaller than front print the array from front to max-1 and then print from 0 to rear
    {
        for(i=Q->front;i<max;i++)
        {
            printf("%d ",Q->queue[i]);
        }
        for(i=0;i<=Q->rear;i++)
        {
            printf("%d ",Q->queue[i]);
        }
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
        printf("#####################");
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