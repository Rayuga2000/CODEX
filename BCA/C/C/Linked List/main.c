#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
}Node;

int main()
{
    Node *head,*node;
    int n;

    head=(Node*)malloc(sizeof(Node));//create new node dynamicaly and store pointer into head
    node=head;//node is now pointing at the same node where head is pointing

    printf("How many elements you want to store?: ");
    scanf("%d",&n);

    printf("Enter your data: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&node->data);
        if(i==n-1)
        {
            node->next=NULL;//assign null to the last node->next
            node=head;//return node pointer to head 
        }
        else
        {
            node->next=(Node*)malloc(sizeof(Node));//node->next pointing to a new node
            node=node->next;//node now points to the newly created node as well
        }
    }

    while(node!=NULL)
    {
        printf("%d ",node->data);
        node=node->next;
    }
    printf("\n");

    return (0);
}