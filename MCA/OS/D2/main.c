#include <stdio.h>
#include <signal.h>
#include <unistd.h>

void signal_handler(int sig) {
    printf("Received signal %d\n", sig);
}

void interrupt_handler(int sig) {
    printf("Received interrupt %d\n", sig);
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