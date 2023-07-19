#include <stdio.h>
#include <signal.h>
#include <unistd.h>
#include <stdlib.h>

void abc(){
    printf("Child sending signal %d\n", SIGCHLD);
    printf("\nParent existing");
    exit(0);
}

int main(){
    int pid;
    pid = fork();
    if(pid==0)
    {
        printf("Child process created successfully with pid: %d\n",getpid());
        sleep(2);
        printf("Child existing\n");
    }
    else if(pid==-1){
        printf("Child creation failed");
    }
    else
    {
        printf("Parent process pid: %d",getpid());
        printf("\nChild process pid: %d",pid);
        signal(SIGCHLD,abc);
        wait(NULL);
    }
}