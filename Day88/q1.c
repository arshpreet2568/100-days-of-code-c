//Q138: Print all enum names and integer values using a loop.

/*
Sample Test Cases:
Input 1:
No input
Output 1:
RED=0
YELLOW=1
GREEN=2

*/
#include <stdio.h>

enum Color { RED, YELLOW, GREEN };

int main() {
    enum Color color;
    for (color = RED; color <= GREEN; color++) {
        switch (color) {
            case RED:
                printf("RED=%d\n", color);
                break;
            case YELLOW:
                printf("YELLOW=%d\n", color);
                break;
            case GREEN:
                printf("GREEN=%d\n", color);
                break;
        }
    }
    return 0;
}