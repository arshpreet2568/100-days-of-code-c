//Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

/*
Sample Test Cases:
Input 1:
3 3 3
Output 1:
Equilateral

Input 2:
3 3 4
Output 2:
Isosceles

Input 3:
2 3 4
Output 3:
Scalene

*/
#include <stdio.h>
int main() {
    float side1, side2, side3;

    printf("Enter the lengths of the three sides of the triangle: ");
    scanf("%f %f %f", &side1, &side2, &side3);

    if (side1 <= 0 || side2 <= 0 || side3 <= 0) {
        printf("Invalid side lengths\n");
    }
    else if (side1 == side2 && side2 == side3) {
        printf("Equilateral\n");
    }
    else if (side1 == side2 || side1 == side3 || side2 == side3) {
        printf("Isosceles\n");
    }
    else {
        printf("Scalene\n");
    }

    return 0;
}