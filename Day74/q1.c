//Q124: Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().

/*
Sample Test Cases:
Input 1:
Source File: source.txt (Content: Learning C File Handling)
Output 1:
File copied successfully to destination.txt

*/
#include <stdio.h>
int main() {
    char sourceFile[100], destinationFile[100];
    printf("Enter source file name: ");
    scanf("%s", sourceFile); // Read the source file name

    printf("Enter destination file name: ");
    scanf("%s", destinationFile); // Read the destination file name

    FILE *source = fopen(sourceFile, "r"); // Open the source file in read mode
    if (source == NULL) {
        printf("Error opening source file!\n");
        return 1; // Exit if the source file cannot be opened
    }

    FILE *destination = fopen(destinationFile, "w"); // Open the destination file in write mode
    if (destination == NULL) {
        printf("Error opening destination file!\n");
        fclose(source); // Close the source file before exiting
        return 1; // Exit if the destination file cannot be opened
    }

    char ch;
    while ((ch = fgetc(source)) != EOF) { // Read each character from the source file until EOF
        fputc(ch, destination); // Write the character to the destination file
    }

    fclose(source); // Close the source file
    fclose(destination); // Close the destination file

    printf("File copied successfully to %s\n", destinationFile); // Confirmation message
    return 0;
}