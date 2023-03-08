#include<stdio.h>

void func(int *x,int *y){
    *x=*y;
    printf("%d",*x);
}

int main(){
    int x=3,y=5;

    func(&x,&y);
    printf("\n%d",x);

    return 0;
}