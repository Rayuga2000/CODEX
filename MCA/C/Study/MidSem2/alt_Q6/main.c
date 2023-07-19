#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node* next;
}node;

node *head=NULL,*tail,*temp;

void insert(){
    for(int i=0;i<3;i++){
        printf("Enter Data: ");
        if(head==NULL){
            head=(node*)malloc(sizeof(node));
            tail=head;
        }
        else{
            tail->next=(node*)malloc(sizeof(node));
            tail=tail->next;
        }
        scanf("%d",&tail->data);
        tail->next=NULL;
    }
}

int main(){
    temp=head;
    int n,sum=0;
    //int min=head->data,max=head->data;

    /*printf("Enter No. of data: ");
    scanf("%d",&n);*/
    insert();

    /*while(temp!=NULL){
        if(min>temp->data){
            min=temp->data;
        }
        else if(max<temp->data){
            max=temp->data;
        }
        sum+=temp->data;
        temp=temp->next;
    }

    float avg=sum/3;

    printf("Min: %d\nMax: %d\nAvg: %f\n",min,max,avg);*/

    return 0;
}