#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node* next;
}node;

node* createList(int n,node *head,node *tail){
    int i=1;
    node *curr;
    
    while(i<=n){
        if(head==NULL){
            head=(node*)malloc(sizeof(node));
            printf("Enter data: ");
            scanf("%d",&head->data);
            head->next=NULL;
            tail=head;
            i++;
        }
        else{
            curr=(node*)malloc(sizeof(node));
            curr->next=head;
            printf("Enter data: ");
            scanf("%d",&curr->data);
            head=curr;
            i++;
        }
    }
    return head;
}

void displayList(node *head){
    node *temp;
    temp=head;

    printf("Linked list: ");
    while(temp->next!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("%d ",temp->data);
}

int main(){
    int n;
    node *head,*tail;
    head=NULL;
    tail=head;

    printf("Enter no. of data to insert: ");
    scanf("%d",&n);

    displayList(createList(n,head,tail));
    //displayList(head);
    
    return 0;
}