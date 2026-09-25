//Q93: Check if two strings are anagrams of each other.

/*
Sample Test Cases:
Input 1:
listen
silent
Output 1:
Anagrams

Input 2:
hello
world
Output 2:
Not anagrams

*/
#include <stdio.h>
int main() {
    char str1[100], str2[100];
    int count1[256] = {0}, count2[256] = {0}; // Assuming ASCII characters

    // Read the two strings
    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);

    // Count the frequency of each character in the first string
    for (int i = 0; str1[i] != '\0'; i++) {
        if (str1[i] != '\n') { // Ignore newline character
            count1[(unsigned char)str1[i]]++;
        }
    }

    // Count the frequency of each character in the second string
    for (int i = 0; str2[i] != '\0'; i++) {
        if (str2[i] != '\n') { // Ignore newline character
            count2[(unsigned char)str2[i]]++;
        }
    }

    // Compare the two frequency arrays
    int areAnagrams = 1; // Assume they are anagrams
    for (int i = 0; i < 256; i++) {
        if (count1[i] != count2[i]) {
            areAnagrams = 0; // Not anagrams
            break;
        }
    }

    // Print the result
    if (areAnagrams) {
        printf("Anagrams\n");
    } else {
        printf("Not anagrams\n");
    }

    return 0;
}