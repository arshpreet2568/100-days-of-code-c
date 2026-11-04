//Q122: Write a C program that opens an existing file (e.g., info.txt) and reads its contents using fgets(). The program should print all the lines to the console until EOF (end of file) is reached.

/*
Sample Test Cases:
Input 1:
File: info.txt (Content: Name: Rahul\nAge: 23)
Output 1:
Name: Rahul
Age: 23

*/
#include <stdio.h>
int main() {
    FILE *file = fopen("info.txt", "r"); // Open the file in read mode
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1; // Exit if the file cannot be opened
    }

    char line[100];
    while (fgets(line, sizeof(line), file)) { // Read each line until EOF
        printf("%s", line); // Print the line to the console
    }

    fclose(file); // Close the file
    return 0;
}