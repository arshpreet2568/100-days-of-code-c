//Q94: Find the longest word in a sentence.

/*
Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/
#include <stdio.h>
int main() {
    char sentence[1000];
    fgets(sentence, sizeof(sentence), stdin);

    char longestWord[100] = "";
    char currentWord[100] = "";
    int maxLength = 0, currentLength = 0;

    for (int i = 0; sentence[i] != '\0'; i++) {
        if (sentence[i] != ' ' && sentence[i] != '\n') {
            currentWord[currentLength++] = sentence[i];
        } else {
            currentWord[currentLength] = '\0'; // Null-terminate the current word
            if (currentLength > maxLength) {
                maxLength = currentLength;
                strcpy(longestWord, currentWord);
            }
            currentLength = 0; // Reset for the next word
        }
    }

    // Check the last word in case the sentence doesn't end with a space
    if (currentLength > maxLength) {
        currentWord[currentLength] = '\0';
        strcpy(longestWord, currentWord);
    }

    printf("%s\n", longestWord);
    return 0;
}