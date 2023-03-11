#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node* next;
}node;

node* createList(int n,node *head,node *tail){
    int i=1;
    
    while(i<=n){
        if(i==1){
            head=(node*)malloc(sizeof(node));
            printf("Enter data for node%d: ",i);
            scanf("%d",&head->data);
            head->next=NULL;
            tail=head;
            i++;
        }
        else{
            tail->next=(node*)malloc(sizeof(node));
            tail=tail->next;
            printf("Enter data for node%d: ",i);
            scanf("%d",&tail->data);
            tail->next=NULL;
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

node* insert(int n,node *head){
    node *temp=head;
    while(temp->data!=n){
        temp=temp->next;
    }

    node *curr=(node*)malloc(sizeof(node));
    printf("Enter data to insert: ");
    scanf("%d",&curr->data);

    curr->next=temp->next;
    temp->next=curr;

    return head;
}

int main(){
    int n;
    node *head,*tail;

    printf("Enter no. of data to insert: ");
    scanf("%d",&n);

    head=createList(n,head,tail);
    displayList(head);

    printf("Enter Data before Node: ");
    scanf("%d",&n);

    head=insert(n,head);
    displayList(head);
    
    return 0;
}