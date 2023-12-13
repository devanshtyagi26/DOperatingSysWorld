#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int main(){
        pid_t pid, par;
        par = fork();
        pid = getpid();
        if(par<0){
                fprintf(stderr, "Fork Failed!!!");
                return 1;
        }
        printf("Output of fork id %d \n", par);
        printf("Process ID is: %d \n", pid);
        return 0;
}