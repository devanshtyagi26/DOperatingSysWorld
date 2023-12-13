#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(){
        int pid;
        pid = fork();
        if(pid<0){
                printf("\n Fork Filed!!!");
                exit(1);
        }
        else if(pid==0){
                printf("\nThis is child process...\n");
                printf("The PID is %d\n", getpid());
                exit(0);
        }
        else if(pid>0){
                printf("\nThis is parent process...\n");
                printf("The Actual PID is %d \n", getpid());
                wait(NULL);
                exit(1);
        }
}