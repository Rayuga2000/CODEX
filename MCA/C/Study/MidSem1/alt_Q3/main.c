//explain the following code:

#include<stdio.h>

int main(){
    int a=10;
    void *p=&a;
    int *ptr=p;
    printf("%u",*ptr);
    return 0;
}