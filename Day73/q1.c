//Q123: Read a text file and count the total number of characters, words, and lines. A word is defined as a sequence of non-space characters separated by spaces or newlines.

/*
Sample Test Cases:
Input 1:
File: sample.txt (Content: Hello world\nThis is C programming)
Output 1:
Characters: 31
Words: 5
Lines: 2

*/
#include <stdio.h>
int main() {
    FILE *file = fopen("sample.txt", "r"); // Open the file in read mode
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1; // Exit if the file cannot be opened
    }

    int characters = 0, words = 0, lines = 0;
    char ch;
    int inWord = 0; // Flag to track if we are inside a word

    while ((ch = fgetc(file)) != EOF) { // Read each character until EOF
        characters++; // Count characters

        if (ch == '\n') {
            lines++; // Count lines
        }

        if (ch == ' ' || ch == '\n' || ch == '\t') {
            inWord = 0; // We are not inside a word
        } else if (!inWord) {
            words++; // Count words when we encounter a non-space character after a space/newline
            inWord = 1; // We are now inside a word
        }
    }

    fclose(file); // Close the file

    printf("Characters: %d\n", characters);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);

    return 0;
}