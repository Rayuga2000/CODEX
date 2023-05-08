#include<stdio.h>

int main(){
    struct bitfields{
        int bits_1:2;
        int bits_2:4;
        int bits_3:4;
        int bits_4:3;
    }bit={2,3,8,7};

    printf("%d %d %d %d",bit.bits_1,bit.bits_2,bit.bits_3,bit.bits_4);
    
    return 0;
}