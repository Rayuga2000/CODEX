#include <stdio.h>
#include <signal.h>
#include <unistd.h>
#include <string.h>
void abc();
//main function
int main()
{
    int pid;
    pid = fork();
    if(pid==0)
    {
        printf("Child goes to sleep for 5 sec\n");
        sleep(5);
        printf("Child existing\n");
    }
    else
    {
        signal(SIGCHLD, abc);
        for(;;);
    }
}
//abc() function definition
void abc()
{
    printf("Child sending signal %d\n", SIGCHLD);
    printf("\nParent existing");
    exit(0);
}