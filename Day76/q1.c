//Q126: Ask the user for a filename. Check if it exists by trying to open it in read mode. If the file pointer is NULL, print an error message; otherwise, read and display its content.

/*
Sample Test Cases:
Input 1:
Filename: sample.txt (File Exists: Yes)
Output 1:
File opened successfully.
(Displays file content)

Input 2:
Filename: nofile.txt (File Exists: No)
Output 2:
Error: File does not exist!

*/
#include <stdio.h>
int main() {
    char filename[100];
    printf("Enter filename: ");
    scanf("%s", filename); // Read the filename from the user

    FILE *file = fopen(filename, "r"); // Try to open the file in read mode
    if (file == NULL) {
        printf("Error: File does not exist!\n"); // Print error message if file cannot be opened
        return 1; // Exit the program
    }

    printf("File opened successfully.\n");
    char ch;
    while ((ch = fgetc(file)) != EOF) { // Read and display the content of the file until EOF
        putchar(ch);
    }

    fclose(file); // Close the file
    return 0;
}