//Q100: Print all sub-strings of a string.

/*
Sample Test Cases:
Input 1:
abc
Output 1:
a,ab,abc,b,bc,c

*/
#include <stdio.h>
int main() {
    char str[100];
    fgets(str, sizeof(str), stdin);
    
    // Remove the newline character if present
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n') {
            str[i] = '\0';
            break;
        }
    }
    
    // Print all sub-strings
    for (int i = 0; str[i] != '\0'; i++) {
        for (int j = i; str[j] != '\0'; j++) {
            printf("%.*s", j - i + 1, &str[i]);
            if (str[j + 1] != '\0') {
                printf(",");
            }
        }
    }
    
    printf("\n");
    return 0;
}