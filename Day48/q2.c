//Q96: Reverse each word in a sentence without changing the word order.

/*
Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc

*/
#include <stdio.h>
int main() {
    char str[100];
    fgets(str, sizeof(str), stdin);
    
    int start = 0, end = 0;
    while (str[end] != '\0') {
        if (str[end] == ' ' || str[end] == '\n') {
            // Reverse the word from start to end-1
            for (int i = end - 1; i >= start; i--) {
                putchar(str[i]);
            }
            putchar(' '); // Print space after the word
            start = end + 1; // Move to the next word
        }
        end++;
    }
    
    // Reverse the last word if there is no space at the end
    if (start < end) {
        for (int i = end - 1; i >= start; i--) {
            putchar(str[i]);
        }
    }
    
    return 0;
}