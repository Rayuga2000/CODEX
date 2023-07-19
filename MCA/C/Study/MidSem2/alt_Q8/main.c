//merge 2 LL and sort them
#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node *next;
}node;

node *head,*temp;

node* insert(){
    head=NULL;

    for(int i=0;i<3;i++){
        printf("Enter Data: ");
        if(head==NULL){
            head=(node*)malloc(sizeof(node));
            temp=head;
        }
        else{
            temp->next=(node*)malloc(sizeof(node));
            temp=temp->next;
        }
        scanf("%d",&temp->data);
    }
    temp->next=NULL;

    return head;
}

void display(node *temp){
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }    
}

int main(){
    node *h1,*h2;

    printf("List1--->\n");
    h1=insert();
    printf("List1: ");
    display(h1);

    printf("\nList2--->\n");
    h2=insert();
    printf("List2: ");
    display(h2);

    node *t1=h1,*t2;

    temp=h1;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=h2;

    while(t1->next!=NULL){
        t2=t1->next;
        while(t2!=NULL){
            if(t1->data>t2->data){
                t1->data=t1->data+t2->data;
                t2->data=t1->data-t2->data;
                t1->data=t1->data-t2->data;
            }
            t2=t2->next;
        }
        t1=t1->next;
    }

    printf("Sorted Merged list: ");
    display(h1);

    return 0;
}