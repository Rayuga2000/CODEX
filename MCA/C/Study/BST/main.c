#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node *left;
    struct node *right;
}node;

node *root=NULL,*temp,*curr=NULL;
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
                else if(curr->data>temp->data){
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

node* successor(node *temp){
    while(temp->left!=NULL)
    {
        curr=temp;
        temp=temp->left;
    }

    if(curr){
        curr->left=NULL;
    }
    
    return temp;
}

node* predecessor(node *temp){
    while(temp->right!=NULL)
    {
        curr=temp;
        temp=temp->right;
    }

    if(curr){
        curr->right=NULL;
    }
    
    return temp;
}

node* delete(node* root,int n){
    if(n>root->data){
        root->right=delete(root->right,n);
    }
    else if(n<root->data){
        root->left=delete(root->left,n);
    }
    else{
        if(root->left==NULL && root->right==NULL){
            free(root);
            return NULL;
        }
        else if(root->left==NULL){
            temp=root->right;
            free(root);
            return temp;
        }
        else if(root->right==NULL){
            temp=root->left;
            free(root);
            return temp;
        }
        else{
            printf("\n0)Predecessor\n1)Successor\nChoose: ");
            scanf("%d",&n);

            if(n){
                temp=successor(root->right);
                temp->left=root->left;
                if(temp->right){
                    temp->right->right=root->right;
                }
                else{
                    temp->right=root->right;
                }
                free(root);
                return temp;
            }
            else{
                temp=predecessor(root->left);
                temp->right=root->right;
                if(temp->left){
                    temp->left->left=root->left;
                }
                else{
                    temp->left=root->left;
                }
                free(root);
                return temp;
            }            
        }
        
    }

    return root;
}

void preorder(node *temp){
    if(temp!=NULL){
        printf("%d ",temp->data);
        preorder(temp->left);
        preorder(temp->right);
    }
    return;
}

void inorder(node *temp){
    if(temp!=NULL){
        inorder(temp->left);
        printf("%d ",temp->data);
        inorder(temp->right);
    }
    return;
}

void postorder(node *temp){
    if(temp!=NULL){
        postorder(temp->left);
        postorder(temp->right);
        printf("%d ",temp->data);
    }
    return;
}

int main(){    
    insert();

    printf("\nPreorder: ");
    preorder(root);

    printf("\nInorder: ");
    inorder(root);

    printf("\nPostorder: ");
    postorder(root);

    root=delete(root,11);
    printf("\nInorder: ");
    inorder(root);

    return 0;
}