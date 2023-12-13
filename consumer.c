#include <stdio.h>

int main() {
    char buffer[100];
    printf("Consumer is waiting for data...\n");
    fgets(buffer, sizeof(buffer), stdin);
    printf("Consumer received: %s", buffer);
    return 0;
}