#include<stdio.h>

int main(){
int a[2][2]={{1,2},{2,1}};

printf("%d",*(*(a+1)+0));
    return 0;
}

//