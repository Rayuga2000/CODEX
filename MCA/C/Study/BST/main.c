#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node *left;
    struct node *right;
}node;

node *root=NULL;
int arr[5];

void insert(){
    int n;

    printf("Enter no. of data: ");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        node *curr=(node*)malloc(sizeof(node));

        printf("Enter data: ");
        scanf("%d",&curr->data);
        curr->left=NULL;
        curr->right=NULL;

        if(root==NULL){
            root=curr;
        }
        else{
            node *temp=(node*)malloc(sizeof(node));
            temp=root;

            while(1){
                if(curr->data<temp->data){
                    if(temp->left!=NULL){
                        temp=temp->left;
                    }
                    else{
                        temp->left=curr;
                        break;
                    }
                }
                if(curr->data>temp->data){
                    if(temp->right!=NULL){
                        temp=temp->right;
                    }
                    else{
                        temp->right=curr;
                        break;
                    }
                }
            }
            
        }
    }
}

void preorder(node *root){
    if(root!=NULL){
        printf("%d ",root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

void inorder(node *root){
    if(root!=NULL){
        preorder(root->left);
        printf("%d ",root->data);
        preorder(root->right);
    }
}

void postorder(node *root){
    if(root!=NULL){
        preorder(root->left);
        preorder(root->right);
        printf("%d ",root->data);
    }
}

int main(){    
    insert();

    printf("Preorder: ");
    preorder(root);

    printf("Inorder: ");
    inorder(root);

    printf("Postorder: ");
    postorder(root);
    return 0;
}