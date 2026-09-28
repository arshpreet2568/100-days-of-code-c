//Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.

/*
Sample Test Cases:
Input 1:
15/04/2025
Output 1:
15-Apr-2025

*/
#include <stdio.h>
int main() {
    char date[11];
    fgets(date, sizeof(date), stdin);
    
    // Check if the date is in the expected format
    if (date[2] == '/' && date[5] == '/') {
        // Print the day
        printf("%c%c-", date[0], date[1]);
        
        // Print the month abbreviation for April
        printf("Apr-");
        
        // Print the year
        printf("%c%c%c%c\n", date[6], date[7], date[8], date[9]);
    } else {
        printf("Invalid date format\n");
    }
    
    return 0;
}