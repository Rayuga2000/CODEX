#include<stdio.h>

int rear=-1,front=-1;

void enqueue(int size,int *queue){
    printf("Enter no. of data: ");
    scanf("%d",&n);

    if((rear+1)%size==front){
        printf("\nQueue overflow");
    }
    else if(rear=-1){
        for(int i=0;i<n;i++){
            printf("Enter data: ");
            scanf("%d",&queue[++rear]);
        }
    }
    else{
        for(int i=0;i<n;i++){
            printf("Enter data: ");
            rear=(rear+1)%size;
            scanf("%d",&queue[rear]);
        }
    }
}
int main(){
    int n,ch=0;

    printf("Enter Queue size: ");
    scanf("%d",&n);

    int queue[n];

    while(ch!=5){
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
            printf("\nBye...");
            break;

        default:
            break;
        }
    }

    return 0;
}