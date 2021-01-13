#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
}Node;

void display(Node* head,Node* tail)
{
    Node* temp=head;
    while(temp!=NULL)
    {
        if(temp==tail)
        {
            printf("%d ",temp->data);
            break;
        }
        else
        {
            printf("%d ",temp->data);
            temp=temp->next;
        }
    }
}

void insert(Node* head,Node* tail)
{
    int c,x;
    Node *newnode=(Node*)malloc(sizeof(Node));
    printf("\nEnter your choice:\n1)Insert from beginning\n2)Insert from end\n===> ");
    scanf("%d",&c);
    printf("Enter how many data to be stored?: ");
    scanf("%d",&x);

    switch(c)
    {
    case 1:
        for(int i=0;i<x;i++)
        {
            printf("Enter the data: ");
            scanf("%d",&newnode->data);

            newnode->next=tail->next;
            tail->next=newnode;
            if(i==x-1)
            {
                head=newnode;
                break;
            }
            else
            {
                newnode=(Node*)malloc(sizeof(Node));
            }
        }
        break;
    case 2:
        tail->next=newnode;
        tail=tail->next;

        for(int i=0;i<x;i++)
        {
            printf("Enter the data: ");
            scanf("%d",&tail->data);

            if(i==x-1)
            {
                tail->next=head;
                break;
            }
            else
            {
                tail->next=(Node*)malloc(sizeof(Node));
                tail=tail->next;
            }
        }
        break;
    
    default:
        printf("Something went wrong");
        break;
    }
    printf("The new data elements are===> ");
    display(head,tail);
}

int main()
{
    Node *head,*tail;
    int n,op;

    head=(Node*)malloc(sizeof(Node));
    tail=head;
    
    printf("How many elements you want to store?: ");
    scanf("%d",&n);

    printf("Enter your data: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&tail->data);
        if(i==n-1)
        {
            tail->next=head;
            break;
        }
        else
        {
            tail->next=(Node*)malloc(sizeof(Node));
            tail=tail->next;
        }
    }

    printf("The data elements are===> ");
    display(head,tail);
    while(1)
    {
        insert(head,tail);
    }
    printf("\n");

    return (0);
}