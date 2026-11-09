//Q137: Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.

/*
Sample Test Cases:
Input 1:
GUEST
Output 1:
Welcome Guest!

*/
#include <stdio.h>

enum UserRole { ADMIN, USER, GUEST };

int main() {
    enum UserRole role;

    printf("Enter user role (0 for ADMIN, 1 for USER, 2 for GUEST): ");
    scanf("%d", &role);

    switch(role) {
        case ADMIN:
            printf("Welcome Admin!\n");
            break;
        case USER:
            printf("Welcome User!\n");
            break;
        case GUEST:
            printf("Welcome Guest!\n");
            break;
        default:
            printf("Invalid user role\n");
            return 1;
    }

    return 0;
}