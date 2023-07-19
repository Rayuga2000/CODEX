//merge 2 linked list
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
            tail=head;
        }
        else{
            tail->next=(node*)malloc(sizeof(node));
            tail=tail->next;
        }
        scanf("%d",&tail->data);
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

    node *temp1=h1->next,*temp2=h2->next;
    head=h1;
    while(h2->next!=NULL){
        h1->next=h2;
        h1=temp1;
        h2->next=h1;
        h2=temp2;
        temp1=h1->next;
        temp2=h2->next;
    }
    h1->next=h2;

    printf("\n\nMerged ");
    display(head);

    return 0;
}