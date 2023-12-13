#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main(){
    int x = 1;
    if(fork() == 0){
        printf("Hello from Child x = %d\n", ++x);
    }
    else{
        printf("Hello from Parent x = %d\n", --x);
    }
    return 0;
}