#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
}node;

int main()
{
    node* head=(node*)malloc(sizeof(node));
    node* node1=(node*)malloc(sizeof(node));
    node* node2=(node*)malloc(sizeof(node));
    node* node3=(node*)malloc(sizeof(node));

    printf("Enter your data(Upto 3): ");
    scanf("%d%d%d",&node1->data,&node2->data,&node3->data);

    head->next=node1;
    node1->next=node2;
    node2->next=node3;
    node3->next=NULL;

    while(head!=NULL)
    {
        printf("%d ",head->data);
        head=head->next;
    }
}