#include "../Deletion/module.c"
#include<stdio.h>
#include<stdlib.h>

node* deleteTail(node *head){
    node *temp,*curr;
    temp=head;

    while(temp->next!=NULL){
        curr=temp;
        temp=temp->next;
    }

    curr->next=NULL;
    free(temp);

    return head;
}

int main(){
    int n;
    node *head,*tail;
    head=NULL;
    tail=head;

    printf("Enter no. of data to insert: ");
    scanf("%d",&n);

    head=createList(n,head,tail);
    displayList(head);

    printf("\nAfter Deleting tail node ");
    displayList(deleteTail(head));
    
    return 0;
}