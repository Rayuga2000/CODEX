//input hello 2
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<signal.h>
#include<string.h>

char msg[100];

void abc(){
    printf("Process recieved: %s\n",msg);
    exit(0);
}

int main(int argc,char *argv[]){
    int tim=atoi(argv[2]);
    strcpy(msg,argv[1]);
    signal(SIGALRM,abc);
    alarm(tim);
    for(;;);

    return 0;
}
