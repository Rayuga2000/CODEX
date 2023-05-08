#include<stdio.h>
#include<stdlib.h>

int main(){
    int *p;
    p=(int*)malloc(20);
    printf("%d",sizeof(p));
    free(p);
    return 0;
}