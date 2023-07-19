#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int coef;
    int pow;
    struct node *next;
}node;

node *head,*tail;
node* insert(){
    head=NULL;
    for(int i=0;i<3;i++){
        if(head==NULL){
            head=(node*)malloc(sizeof(node));
            tail=head;
        }
        else{
            tail->next=(node*)malloc(sizeof(node));
            tail=tail->next;
        }
        printf("Enter coef: ");
        scanf("%d",&tail->coef);
        printf("Enter pow: ");
        scanf("%d",&tail->pow);
        tail->next=NULL;
    }
    return head;
}

void display(node *temp){
    while(temp!=NULL){
        printf("%dx^%d ",temp->coef,temp->pow);
        temp=temp->next;
    }
}

void add(node* h1,node* h2){
    node *result,*temp=result;
    int x,y;

    while(){
            if(h1->pow==h2->pow){
            x=h1->coef+h2->coef;
            y=h1->pow;
            h1=h1->next;
            h2=h2->next;
        }
        if(h1->pow>h2->pow){
            x=h1->coef;
            y=h1->pow;
            h1=h1->next;
        }
        else if(h1->pow<h2->pow){
            x=h2->coef;
            y=h2->pow;
            h2=h2->next;
        }
        if(result=NULL){
            result=(node*)malloc(sizeof(node));
        }
        else{
            temp->next=(node*)malloc(sizeof(node));
            temp=temp->next;
        }
        temp->coef=x;
        temp->pow=y;
        temp->next=NULL;
    }
}
int main(){
    printf("Polynomial1--->\n");
    node *h1=insert();
    printf("Polynomial1---> ");
    display(h1);

    printf("Polynomial2--->\n");
    node *h2=insert();
    printf("Polynomial2---> ");
    display(h2);


    return 0;
}