#include<stdio.h>

struct book{
    int ISBN;
    int pages;
    float price;
}b1,b2,b3;

int main(){
    int a,b,i;
    float c;

    for(i=1;i<4;i++){
        printf("\nEnter values of Book%d:",i);
        scanf("%d%d%f",&a,&b,&c);

        if(i==1){
            b1.ISBN=a,b1.pages=b,b1.price=c;
            //creates a local book variable with scope same as the if block
            //struct book b1={a,b,c} also this type assignment is only valid at the time of creating/declaring the var
            
        }
        else if(i==2){
            b2.ISBN=a,b2.pages=b,b2.price=c;
        }
        else if(i==3){
            b3.ISBN=a,b3.pages=b,b3.price=c;
        }
    }

    printf("\nBook1:\nISBN: %d Pages: %d Price: %f",b1.ISBN,b1.pages,b1.price);//calling the global book var
    printf("\nBook2:\nISBN: %d Pages: %d Price: %f",b2.ISBN,b2.pages,b2.price);
    printf("\nBook3:\nISBN: %d Pages: %d Price: %f",b3.ISBN,b3.pages,b3.price);

    return 0;
}