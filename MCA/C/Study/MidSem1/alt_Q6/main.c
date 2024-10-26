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
    node *h1,*h2,*temp;

    printf("List1--->\n");
    h1=insert();
    display(h1);

    printf("\nList2--->\n");
    h2=insert();
    display(h2);

    temp=h2;
    h2=h2->next;
    temp->next=h1;
    h1=temp;
    temp=NULL;

    printf("\n\nList1 after changes---> ");
    display(h1);

    printf("\nList2 after changes---> ");
    display(h2);
    return 0;
}