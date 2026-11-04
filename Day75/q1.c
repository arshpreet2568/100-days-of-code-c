//Q125: Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.

/*
Sample Test Cases:
Input 1:
Existing File: data.txt (Content before execution: Hello world)
User Input: This is appended text.
Output 1:
File updated successfully with appended text.

*/
#include <stdio.h>
int main() {
    FILE *file = fopen("data.txt", "a"); // Open the file in append mode
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1; // Exit if the file cannot be opened
    }

    char newText[100];
    printf("Enter text to append: ");
    getchar(); // Clear the newline character from the input buffer
    fgets(newText, sizeof(newText), stdin); // Read the new line of text from the user

    fprintf(file, "%s", newText); // Append the text to the file
    fclose(file); // Close the file

    printf("File updated successfully with appended text.\n"); // Confirmation message
    return 0;
}