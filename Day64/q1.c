//Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.

/*
Sample Test Cases:
Input 1:
s = "abcabcbb"
Output 1:
3

Input 2:
s = "bbbbb"
Output 2:
1

Input 3:
s = "pwwkew"
Output 3:
3

*/
#include <stdio.h>
int lengthOfLongestSubstring(char *s) {
    int n = 0;
    int maxLength = 0;
    int start = 0;
    int charIndex[256] = {0}; // Array to store the last index of each character

    for (int end = 0; s[end] != '\0'; end++) {
        char currentChar = s[end];
        if (charIndex[(unsigned char)currentChar] > start) {
            start = charIndex[(unsigned char)currentChar];
        }
        charIndex[(unsigned char)currentChar] = end + 1; // Store the index + 1
        maxLength = (end - start + 1 > maxLength) ? end - start + 1 : maxLength;
    }

    return maxLength;
}