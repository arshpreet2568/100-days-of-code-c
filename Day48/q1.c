//Q95: Check if one string is a rotation of another.

/*
Sample Test Cases:
Input 1:
abcde
deabc
Output 1:
Rotation

Input 2:
abc
acb
Output 2:
Not rotation

*/
#include <stdio.h>
int main() {
    char str1[100], str2[100];
    scanf("%s %s", str1, str2);
    
    // Check if lengths are equal
    int len1 = 0, len2 = 0;
    while (str1[len1] != '\0') len1++;
    while (str2[len2] != '\0') len2++;
    
    if (len1 != len2) {
        printf("Not rotation\n");
        return 0;
    }
    
    // Concatenate str1 with itself
    char concat[200];
    for (int i = 0; i < len1; i++) {
        concat[i] = str1[i];
    }
    for (int i = 0; i < len1; i++) {
        concat[len1 + i] = str1[i];
    }
    concat[2 * len1] = '\0';
    
    // Check if str2 is a substring of the concatenated string
    int found = 0;
    for (int i = 0; i <= 2 * len1 - len2; i++) {
        int j;
        for (j = 0; j < len2; j++) {
            if (concat[i + j] != str2[j]) {
                break;
            }
        }
        if (j == len2) {
            found = 1;
            break;
        }
    }
    
    if (found) {
        printf("Rotation\n");
    } else {
        printf("Not rotation\n");
    }
    
    return 0;
}