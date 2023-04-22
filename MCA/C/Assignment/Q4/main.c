//program for postfix evaluation using array.

#include<stdio.h>
#include<ctype.h>

int top=-1,size;

void push(int data,int *stack){
    if(top==size-1){
        printf("\nStack Overflow");
    }
    else{
        stack[++top]=data;
    }
}

int pop(int *stack){
    if(top==-1){
        printf("\nStack Underflow");
    }
    else{
        return stack[top--];
    }
}

int main(){
    int n,ch=0,data;

    printf("Enter length: ");
    scanf("%d",&n);

    size=n;

    int stack[n];
    char str[n];

    printf("\nEnter postfix notation: ");
    scanf("%s",&str);

    for(int i=0;i<n;i++){
        if(isdigit(str[i])){
            push(str[i]-'0',stack);
        }
        else{
            int num1,num2;

            num2=pop(stack);
            num1=pop(stack);

            switch(str[i]){
            case '+':
                push(num1+num2,stack);
                break;
            case '-':
                push(num1-num2,stack);
                break;
            case '*':
                push(num1*num2,stack);
                break;
            case '/':
                push(num1/num2,stack);
                break;
            
            default:
                break;
            }
        }
    }
    
    printf("Result: %d",stack[top]);

    return 0;
}