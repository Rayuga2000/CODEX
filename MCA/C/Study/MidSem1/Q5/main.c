#include<stdio.h>

int main(){
    int a[2][3]={{1,2,3},{4,5,6}};

    printf("%d",*(*(a+1)+2));//prints the value of 2nd row 3rd column
    return 0;
}