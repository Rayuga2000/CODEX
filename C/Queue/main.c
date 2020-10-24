#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#define max 100

struct stk{
    int capacity,rear,front;
    char stack[max];
}