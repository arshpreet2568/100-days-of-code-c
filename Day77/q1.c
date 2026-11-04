//Q127: Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.

/*
Sample Test Cases:
Input 1:
Input File (input.txt): Hello World\nC programming
Output 1:
Output File (output.txt): HELLO WORLD\nC PROGRAMMING

*/
#include <stdio.h>
int main() {
    FILE *inputFile = fopen("input.txt", "r"); // Open the input file in read mode
    if (inputFile == NULL) {
        printf("Error opening input file!\n");
        return 1; // Exit if the input file cannot be opened
    }

    FILE *outputFile = fopen("output.txt", "w"); // Open the output file in write mode
    if (outputFile == NULL) {
        printf("Error opening output file!\n");
        fclose(inputFile); // Close the input file before exiting
        return 1; // Exit if the output file cannot be opened
    }

    char ch;
    while ((ch = fgetc(inputFile)) != EOF) { // Read each character from the input file until EOF
        if (ch >= 'a' && ch <= 'z') {
            ch = ch - ('a' - 'A'); // Convert lowercase to uppercase
        }
        fputc(ch, outputFile); // Write the character to the output file
    }

    fclose(inputFile); // Close the input file
    fclose(outputFile); // Close the output file

    printf("Text converted to uppercase and written to output.txt successfully.\n"); // Confirmation message
    return 0;
}