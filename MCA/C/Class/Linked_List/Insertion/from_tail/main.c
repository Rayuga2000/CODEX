#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node* next;
}node;

node* createList(int n,node *head,node *tail){
    int i=1;
    
    while(i<=n){
        if(head==NULL){
            head=(node*)malloc(sizeof(node));
            printf("Enter data for node%d: ",i);
            scanf("%d",&head->data);
            head->next=NULL;
            tail=head;
            //printf("%d\n",head->data);
            i++;
        }
        else{
            tail->next=(node*)malloc(sizeof(node));
            tail=tail->next;
            printf("Enter data for node%d: ",i);
            scanf("%d",&tail->data);
            tail->next=NULL;
            //printf("%d\n",tail->data);
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
    
    return 0;
}