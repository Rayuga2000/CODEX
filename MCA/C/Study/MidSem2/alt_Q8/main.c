//merge 2 linked list in ascending order
#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node* next;
}node;

node *head,*tail;

node* insert(){
    head=NULL;

    for(int i=0;i<3;i++){
        printf("Enter data: ");
        if(head==NULL){
            head=(node*)malloc(sizeof(node));
            scanf("%d",&head->data);
            tail=head;
        }
        else{
            tail->next=(node*)malloc(sizeof(node));
            tail=tail->next;
            scanf("%d",&tail->data);
        }
        tail->next=NULL;
    }

    return head;
}

void display(node *temp){
    printf("Linked List: ");
    while(temp->next!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("%d ",temp->data);
}

int main(){
    node *h1,*h2;

    printf("List1--->\n");
    h1=insert();
    display(h1);

    printf("\n\nList2--->\n");
    h2=insert();
    display(h2);

    tail=h1;
    while(tail->next!=NULL){
        tail=tail->next;
    }
    tail->next=h2;
    h2=NULL;
    free(h2);

    node *t1=h1,*t2=h1->next;  
    while(t1!=NULL && t2!=NULL){
        while(t2!=NULL){
            if(t1->data>t2->data){
                t1->data=t1->data+t2->data;
                t2->data=t1->data-t2->data;
                t1->data=t1->data-t2->data;
            }
            t2=t2->next;
        }
        t1=t1->next;
        t2=t1->next;
    }
    printf("\n\nMerged ");
    display(h1);

    return 0;
}