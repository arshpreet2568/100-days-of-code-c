//Q136: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.

/*
Sample Test Cases:
Input 1:
ADD 10 20
Output 1:
30

*/
#include <stdio.h>

enum Operation { ADD, SUBTRACT, MULTIPLY };

int main() {
    enum Operation op;
    int a, b, result;

    printf("Enter operation (0 for ADD, 1 for SUBTRACT, 2 for MULTIPLY): ");
    scanf("%d", &op);
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    switch(op) {
        case ADD:
            result = a + b;
            break;
        case SUBTRACT:
            result = a - b;
            break;
        case MULTIPLY:
            result = a * b;
            break;
        default:
            printf("Invalid operation\n");
            return 1;
    }

    printf("Result: %d\n", result);
    return 0;
}