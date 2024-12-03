#include <stdio.h>

int main() {
    // First convert input into ASCII
    char line[100];
    printf("Enter A String Below: ");
    fgets(line, 100, stdin);
    int i = 0;
    while(line[i] != '\0' && line[i] != '\n') {
        (int)line[i]; 
        printf("%d ", line[i]);
        i++;
    }
    return 0;
}