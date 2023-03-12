#include "/home/rayuga/Documents/CODEX/MCA/C/Class/Linked_List/Deletion/module.c"
#include<stdio.h>
#include<stdlib.h>

node* deleteMid(int n,node *head){
    node *temp,*curr;
    temp=head;

    while(temp->data!=n){
        curr=temp;
        temp=temp->next;
    }

    curr->next=temp->next;
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

    printf("Enter data to delete: ");
    scanf("%d",&n);

    printf("\nAfter Deleting node ");
    displayList(deleteMid(n,head));
    
    return 0;
}