#include<stdio.h>
#include<stdlib.h>
#include<signal.h>

void sigkey(int signo){
    printf("Process recieved a number: %d",signo);
    exit(0);
}
int main(){
    int i,j;
    printf("Enter the signal number: ");
    scanf("%d",&i);

    if(i==2){
        printf("Please press ctrl+c for generating signal");
        signal(SIGINT,sigkey);
        for(;;);
    }
    if(i==14){
        signal(SIGALRM.sigkey);
        alarm(3);
        for(;;)
    }

    return 0;
}