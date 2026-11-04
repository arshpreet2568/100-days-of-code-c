//Q128: Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters.

/*
Sample Test Cases:
Input 1:
File: text.txt (Content: Welcome to C language)
Output 1:
Vowels: 8
Consonants: 10

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

    int vowels = 0, consonants = 0;
    char ch;
    while ((ch = fgetc(file)) != EOF) { // Read each character from the file until EOF
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) { // Check if the character is a letter
            ch = tolower(ch); // Convert to lowercase for uniformity
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++; // Increment vowel count
            } else {
                consonants++; // Increment consonant count
            }
        }
    }

    fclose(file); // Close the file

    printf("Vowels: %d\n", vowels); // Display the count of vowels
    printf("Consonants: %d\n", consonants); // Display the count of consonants

    return 0;
}