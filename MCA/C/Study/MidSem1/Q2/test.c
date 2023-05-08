#include <stdio.h>

struct BitField {
   unsigned int a : 1; // 1 bit
   unsigned int b : 2; // 2 bits
   unsigned int c : 3; // 3 bits
};

int main() {
   struct BitField bf1 = {1, 2, 3};
   printf("a = %d\n", bf1.a);
   printf("b = %d\n", bf1.b);
   printf("c = %d\n", bf1.c);

   return 0;
}
