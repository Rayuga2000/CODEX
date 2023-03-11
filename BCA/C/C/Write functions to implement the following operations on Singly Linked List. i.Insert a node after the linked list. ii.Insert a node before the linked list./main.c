#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
    int data;
    struct Node *next;
}Node;

Node* begin(Node* head)
{
    int i,n;
    Node *temp;

    printf("How many elements to insert: ");
    scanf("%d",&n);

    printf("Enter the data: ");
    for(i=0;i<n;i++)
    {
        temp=(Node*)malloc(sizeof(Node));
        scanf("%d",&temp->data);
        temp->next=head;
        head=temp;
    }
    printf("New list is=> ");

    return head;
}
Node* end(Node* head)
{
    int i,n;
    Node *temp=head;

    printf("How many elements to insert: ");
    scanf("%d",&n);

    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=(Node*)malloc(sizeof(Node));
    temp=temp->next;

    printf("Enter the data: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&temp->data);
        if(i==n-1)
        {
            temp->next=NULL;
        }
        else
        {
            temp->next=(Node*)malloc(sizeof(Node));
            temp=temp->next;
        }
    }
    printf("New list is=> ");

    return head;
}
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
    int i,n,ch;
    Node *head=(Node*)malloc(sizeof(Node)),*node=head;

    printf("Enter the Size of the linked list: ");
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

    printf("(1)Enter Data at Beginning\n(2)Enter Data at End\nEnter your choice: ");
    scanf("%d",&ch);

    switch(ch)
    {
        case 1:display(begin(head));
               printf("\n");
        break;

        case 2:display(end(head));
               printf("\n");
        break;

        default:printf("Chose correct option");
    }
    
    return 0;
}