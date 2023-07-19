#include<stdio.h>
#include<ctype.h>

int stack[10];

int top=-1;

void push(int n){
    if(top==10){
        printf("Stack Overflow");
    }
    else{
        stack[++top]=n;
    }
}

int pop(){
    int value;

    if(top==-1){
        printf("Stack underflow");
        return -1;
    }

    return stack[top--];
}

int main(){
    char str[10];
    int i=0,num1,num2;

    printf("Enter postfix expression: ");
    scanf("%s",&str);

    while(str[i]!='\0'){
        if(isdigit(str[i])){
            push(str[i]-'0');
            i++;
        }
        else{
            num2=pop();
            num1=pop();

            switch (str[i]){
                case '+':
                    push(num1+num2);
                    break;
                case '-':
                    push(num1-num2);
                    break;
                case '*':
                    push(num1*num2);
                    break;
                case '/':
                    push(num1/num2);
                    break;

                default:
                    break;
            }
            i++;
        }
    }

    printf("Result: %d",pop());

    return 0;
}