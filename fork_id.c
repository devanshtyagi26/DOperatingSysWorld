#include <stdio.h>
#include <unistd.h>

int main() {
    pid_t child_pid = fork();

    if (child_pid < 0) {
        fprintf(stderr, "Fork failed\n");
        return 1;
    } else if (child_pid == 0) {
        printf("Child process: PID = %d\n", getpid());
    } else {
        printf("Parent process: PID = %d, Child PID = %d\n", getpid(), child_pid);
    }

    printf("This is printed by both parent and child processes\n");

    return 0;
}