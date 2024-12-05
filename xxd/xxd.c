#include <stdio.h>

int main() {
    char line[100];
    printf("Enter A String Below: ");
    fgets(line, 100, stdin);
    int i = 0;
    while(line[i] != '\0' && line[i] != '\n') {
        int ascii = (int)line[i];
        int whole = ascii / 16;
        int remainder = ascii % 16;
        if (remainder <= 9) {
            printf("%d%d ", whole, remainder);
        } else {
           printf("%d%X ", whole, remainder);
            }
        i++;
    }
    return 0;
}

 
