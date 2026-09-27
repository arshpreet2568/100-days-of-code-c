//Q98: Print initials of a name with the surname displayed in full.

/*
Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

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
    int i = 1;
    while (name[i] != '\0') {
        if (name[i] == ' ' && name[i + 1] != '\0') {
            printf("%c.", name[i + 1]);
        }
        i++;
    }
    
    // Print the surname in full
    for (int j = i - 1; j >= 0; j--) {
        if (name[j] == ' ') {
            printf(" %s", &name[j + 1]);
            break;
        }
    }
    
    printf("\n");
    return 0;
}