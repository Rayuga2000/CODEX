#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
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
    int i,n;
    Node *head=(Node*)malloc(sizeof(Node)),*node=head;

    printf("Enter the size of the linked list: ");
    scanf("%d",&n);

    printf("Enter the data: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&node->data);
        if(i==n-1)
        {
            node->next=NULL;
            node=head;
        }
        else
        {
            node->next=(Node*)malloc(sizeof(Node));
            node=node->next;
        }
    }

    printf("Elements of the linked list are: ");
    display(head);
    printf("\n");
    
    return 0;
}