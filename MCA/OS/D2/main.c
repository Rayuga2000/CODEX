#include <stdio.h>
#include <signal.h>
#include <unistd.h>
#include<windows.h>

int pid;

void signal_handler(int sig){
    printf("Received signal %d\n", sig);
    printf("Terminating Process...");
    exit(0);
}

void interrupt_handler(int sig){
    printf("Received interrupt %d\n", sig);
    sleep(3);
    raise(SIGTERM);
}

int main() {
    signal(SIGINT, interrupt_handler);
    signal(SIGTERM, signal_handler);

    while(1) {
        printf("Waiting for signals and interrupts...\n");
        sleep(1);
    }

    return 0;
}