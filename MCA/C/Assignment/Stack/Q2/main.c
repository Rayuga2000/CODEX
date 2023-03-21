//stack using array

#include<stdio.h>

int top=-1;

void push(int data,int size,int *stack){
    int n;

    if(top==size-1){
        printf("\nStack Overflow");
    }
    else{
        printf("\nEnter no. of data to push: ");
        scanf("%d",&n);

        for(int i=0;i<n;i++){
            printf("Enter data: ");
            scanf("%d",&stack[++top]);
        } 
    }
}

void pop(int *stack){
    if(top==-1){
        printf("\nStack Underflow");
    }
    else{
        printf("poped %d",stack[top--]);
    }
}

void peek(int* stack){
    if(top==-1){
        printf("\nStack is empty");
    }
    else{
        printf("Top of Stack: %d",stack[top]);
    }
}

int main(){
    int n,ch=0,data;

    printf("\nEnter stack length: ");
    scanf("%d",&n);

    int stack[n];

    while(ch!=4){
        printf("\n1)Push\n2)Pop\n3)Peek\n4)Exit\nEnter a Choice: ");
        scanf("%d",&ch);

        switch(ch)
        {
        case 1:
            push(data,n,stack);            
            break;
        case 2:
            pop(stack);
            break;
        case 3:
            peek(stack);
            break;
        case 4:
            printf("\nBye...");
            break;
        
        default:
            break;
        }
    }
    
    return 0;
}