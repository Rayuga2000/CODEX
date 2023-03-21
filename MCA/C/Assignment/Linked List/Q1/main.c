//Insertion,Deletion of Linked List
#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node* next;
}node;

node *head,*tail,*temp,*curr;

void createList(){
    head=(node*)malloc(sizeof(node));
    printf("Enter data: ");
    scanf("%d",&head->data);
    head->next=NULL;
    tail=head;
}

void insertHead(int n){
    for(int i=0;i<n;i++){
        curr=(node*)malloc(sizeof(node));
        curr->next=head;

        printf("Enter data: ");
        scanf("%d",&curr->data);
        head=curr;
    }
}

void insertMid(int n,int ref){
    temp=head;

    while(temp->data!=ref){
        temp=temp->next;
    }

    for(int i=0;i<n;i++){
        curr=(node*)malloc(sizeof(node));
        curr->next=temp->next;
        temp->next=curr;
        temp=curr;

        printf("Enter data: ");
        scanf("%d",&curr->data);
    }
}

void insertTail(int n){    
    for(int i=0;i<n;i++){
        tail->next=(node*)malloc(sizeof(node));
        tail=tail->next;

        printf("Enter data: ");
        scanf("%d",&tail->data);
        tail->next=NULL;
    }
}

void deleteHead(){
    temp=head;
    head=head->next;
    free(temp);
    printf("Head Node deleted");
}

void deleteMid(int n){
    temp=head;
    while(temp->data!=n){
        curr=temp;
        temp=temp->next;
    }

    curr->next=temp->next;
    free(temp);
    printf("Middle Node deleted");
}

void deleteTail(){
    curr=head;
    while(curr->next!=tail){
        curr=curr->next;
    }

    curr->next=NULL;
    free(tail);
    printf("Tail Node deleted");
}

void displayList(){
    temp=head;

    printf("\nLinked list: ");
    while(temp->next!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("%d ",temp->data);
}

int main(){
    int ch1,ch2,ch3,n,ref;    

    while(ch1!=5){
        printf("\n\nLinked List ---\n1)Create\n2)Insert\n3)Delete\n4)Print List\n5)Exit\nEnter a choice: ");
        scanf("%d",&ch1);

        switch(ch1)
        {
            case 1:
                createList(head);
                break;
            case 2:
                printf("\nInsert From ---\n1)Head\n2)Middle\n3)Tail\nEnter a choice: ");
                scanf("%d",&ch2);

                printf("Enter no. of data to insert: ");
                scanf("%d",&n);

                switch(ch2)
                {
                    case 1:
                        insertHead(n);
                        break;
                    case 2:
                        printf("\nEnter ref. data: ");
                        scanf("%d",&ref);

                        insertMid(n,ref);
                        break;
                    case 3:
                        insertTail(n);
                        break;

                    default:
                        break;
                }

                break;
            case 3:
                printf("\nDelete From ---\n1)Head\n2)Middle\n3)Tail\nEnter a choice: ");
                scanf("%d",&ch3);

                switch(ch3)
                {
                    case 1:
                        deleteHead();
                        break;
                    case 2:
                        printf("\nEnter ref. data: ");
                        scanf("%d",&ref);

                        deleteMid(ref);
                        break;
                    case 3:
                        deleteTail();
                        break;

                    default:
                        break;
                }
                
                break;
            case 4:
                displayList();
                break;
            case 5:
                printf("\nBye have great time---");
                break;
            default:
                break;
        }
    }
}x