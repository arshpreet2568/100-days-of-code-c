//Q140: Define a struct with enum Gender and print person's gender.

/*
Sample Test Cases:
Input 1:
Gender=MALE
Output 1:
Male

*/
#include <stdio.h>
enum Gender {
    MALE,
    FEMALE,
    OTHER
};
int main() {
    struct Person {
        enum Gender gender;
    };

    struct Person person;
    person.gender = MALE; // Assign gender

    // Print person's gender
    switch (person.gender) {
        case MALE:
            printf("Male\n");
            break;
        case FEMALE:
            printf("Female\n");
            break;
        case OTHER:
            printf("Other\n");
            break;
        default:
            printf("Unknown\n");
            break;
    }

    return 0;
}