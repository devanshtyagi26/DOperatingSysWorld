#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(){
        int pid;
        pid = fork();
        if(pid<0){
                printf("Fork Filed\n");
                exit(1);
        }
        else if(pid==0){
                printf("\nHello i am child process...\n");
                printf("The PID is %d \n", getpid());
                exit(0);
        }
        else{
                printf("\nHello i am parent process...");
                printf("\nThe actual PID is %d \n", getpid());
                exit(1);
        }
}