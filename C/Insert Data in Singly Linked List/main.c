#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
}Node;

void display(Node* head)
{
    if(head==NULL)
    {
        return;
    }
    else
    {
        printf("%d ",head->data);
        display(head->next);
    }
}

int main()
{
    Node *head,*node;
    int n,p,v;

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

    printf("Enter the position and value you want to insert: ");
    scanf("%d%d",&p,&v);

    for(int i=1;i<p;i++)//make the node point to the specific position
    {
        node=node->next;
    }
    node->data=v;
    node=head;

    printf("The data elements are===> ");
    display(head);
    printf("\n");

    return (0);
}