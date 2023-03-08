#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node* next;
}node;

void createList(int n,node head,node tail){
    int i=1;
    
    while(i<=n){
        if(n==1){
            printf("Enter data for node%d: ",i);
            scanf("%d",&head.data);
            head.next=NULL;
        }
        else{
            node curr=(node)malloc(sizeof(node));
            printf("Enter data for node%d: ",i);
            scanf("%d",&curr.data);
            curr.next=NULL;
            tail.next=&curr;
            tail=curr;
            i++;
        }
    }
    
    
}
int main(){
    int n;
    struct node head,tail;  
    tail=head;

    printf("Enter no. of data to insert: ",&n);
    createList(n,head,tail);
    return 0;
}