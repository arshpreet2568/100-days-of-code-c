//Q88: Replace spaces with hyphens in a string.

/*
Sample Test Cases:
Input 1:
hello world
Output 1:
hello-world

*/
#include <stdio.h>
int main() {
    char str[100];
    scanf("%[^\n]", str); // Read input string including spaces
    
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            str[i] = '-'; // Replace space with hyphen
        }
    }
    
    printf("%s\n", str);
    
    return 0;
}