//Insertion,Deletion of Linked List
#include "module.c"
#include<stdio.h>

int main(){
    int ch1,ch2,ch3,n;
    node *head;

    

    while(ch1!=5){
        printf("\n\nLinked List ---\n1)Create\n2)Insert\n3)Delete\n4)Print List\n5)Exit\nEnter a choice: ");
        scanf("%d",&ch1);

        switch(ch1)
        {
            case 1:
                head=createList(head);
                break;
            case 2:
                printf("\nInsert From ---\n1)Head\n2)Middle\n3)Tail\nEnter a choice: ");
                scanf("%d",&ch2);

                switch(ch2)
                {
                    case 1:
                        printf("\nEnter no. of data: ");
                        scanf("%d",&n);

                        head=insertHead(n,head);
                        break;
                    case 2:
                        printf("\nEnter ref. data: ");
                        scanf("%d",&n);

                        insertMid(n,head);
                        break;
                    case 3:
                        printf("\nEnter no. of data: ");
                        scanf("%d",&n);

                        insertTail(n,head);
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
                        head=deleteHead(head);
                        break;
                    case 2:
                        printf("Enter ref. data: ");
                        scanf("%d",&n);

                        deleteMid(n,head);
                        break;
                    case 3:
                        deleteTail(head);
                        break;

                    default:
                        break;
                }
                
                break;
            case 4:
                displayList(head);
                break;
            case 5:
                printf("\n Bye have great time---");
                break;
            default:
                break;
        }
    }
}