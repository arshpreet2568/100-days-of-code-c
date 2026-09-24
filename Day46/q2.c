//Q92: Find the first repeating lowercase alphabet in a string.

/*
Sample Test Cases:
Input 1:
stress
Output 1:
s

*/
#include <stdio.h>
int main() {
    char str[100];
    int freq[26] = {0}; // Frequency array for lowercase alphabets
    
    scanf("%[^\n]", str); // Read input string including spaces
    
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            freq[str[i] - 'a']++; // Increment frequency for the character
        }
    }
    
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z' && freq[str[i] - 'a'] > 1) {
            printf("%c\n", str[i]); // Print the first repeating character
            return 0;
        }
    }
    
    printf("No repeating lowercase alphabet found.\n");
    
    return 0;
}