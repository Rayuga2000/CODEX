#include<stdio.h>
#include<stdlib.h>

struct node{
    int x;
};

/*void func(struct node** y){
    *y=(struct node*)malloc(sizeof(struct node));
    *y->x=5;
    printf("%d ",*y->x);
}*/
int f(){
    return 3,4;
}
int main(){
    //struct node* y;
    int x=5;
    int *xe=&x;
    int **xee=&xe;

    int y,z=f();
    printf("%d %d",y,z);
    //printf("%d\n%d\n%d\n",x,xe,*xee);
    //func(&y);
    //printf("%d",y->x);
    //int *x=((int*)2);
    //*x=100;
    //printf("%d",x);
}