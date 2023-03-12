#include "/home/rayuga/Documents/CODEX/MCA/C/Class/Linked_List/Deletion/module.c"
#include<stdio.h>
#include<stdlib.h>

node* deleteHead(node *head){
    node *temp;
    temp=head;

    head=head->next;
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

    printf("\nAfter Deleting Head node ");
    displayList(deleteHead(head));
    
    return 0;
}