//Q97: Print the initials of a name.

/*
Sample Test Cases:
Input 1:
John Doe
Output 1:
J.D.

*/
#include <stdio.h>
int main() {
    char name[100];
    fgets(name, sizeof(name), stdin);
    
    // Print the first initial
    if (name[0] != '\0') {
        printf("%c.", name[0]);
    }
    
    // Find and print the initials of the remaining names
    for (int i = 1; name[i] != '\0'; i++) {
        if (name[i] == ' ' && name[i + 1] != '\0') {
            printf("%c.", name[i + 1]);
        }
    }
    
    printf("\n");
    return 0;
}