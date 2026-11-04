//Q121: Write a C program that creates a text file named info.txt in write mode. The program should take the user’s name and age as input, and write them to the file using fprintf(). After writing, display a message confirming that the data was successfully saved.

/*
Sample Test Cases:
Input 1:
Name: Rahul, Age: 23
Output 1:
File created successfully! Data written to info.txt

*/
#include <stdio.h>
int main() {
    FILE *file = fopen("info.txt", "w"); // Open the file in write mode
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1; // Exit if the file cannot be opened
    }

    char name[50];
    int age;

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin); // Read the user's name

    printf("Enter your age: ");
    scanf("%d", &age); // Read the user's age

    fprintf(file, "Name: %sAge: %d\n", name, age); // Write to the file
    fclose(file); // Close the file

    printf("File created successfully! Data written to info.txt\n"); // Confirmation message
    return 0;
}