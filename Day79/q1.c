//Q129: A file numbers.txt contains a list of integers separated by spaces. Read all integers, compute their sum and average, and print both.

/*
Sample Test Cases:
Input 1:
File: numbers.txt (Content: 10 20 30 40 50)
Output 1:
Sum = 150
Average = 30.00

*/
#include <stdio.h>
int main() {
    FILE *file = fopen("numbers.txt", "r"); // Open the file in read mode
    if (file == NULL) {
        printf("Error: File does not exist!\n"); // Print error message if file cannot be opened
        return 1; // Exit the program
    }

    int number, sum = 0, count = 0;
    while (fscanf(file, "%d", &number) == 1) { // Read integers from the file until EOF
        sum += number; // Add the number to sum
        count++; // Increment the count of numbers
    }

    fclose(file); // Close the file

    if (count > 0) {
        double average = (double)sum / count; // Calculate average
        printf("Sum = %d\n", sum); // Print sum
        printf("Average = %.2f\n", average); // Print average with two decimal places
    } else {
        printf("No integers found in the file.\n"); // Handle case where no integers are found
    }

    return 0;
}