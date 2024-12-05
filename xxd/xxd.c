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
            switch(remainder) {
                case 10: 
                    printf("%dA ", whole);
                    break;
                case 11: 
                    printf("%dB ", whole);
                    break;
                case 12: 
                    printf("%dC ", whole);
                    break;
                case 13:
                    printf("%dD ", whole);
                    break;
                case 14:
                    printf("%dE ", whole);
                    break;
                case 15:
                    printf("%dF ", whole);
                    break;
                default:
                    printf("Error Occured, Remainder Could Not Be Converted To Hexadecimal.");
                    return 1;
            }
        }
        i++;
    }
    return 0;
}
 
