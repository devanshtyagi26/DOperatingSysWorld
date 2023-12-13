#include <stdio.h>
#include <unistd.h>

int main() {
    printf("Before sleep\n");

    // Sleep for 5 seconds
    sleep(5);

    printf("After sleep\n");

    return 0;
}