//Q119: Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.

/*
Sample Test Cases:
Input 1:
nums1 = [1,3,3,4]
Output 1:
3

Input 2:
nums1 = [1,2,2]
Output 2:
2

Input 3:
nums1 = [0,4,1,1,5]
Output 3:
1

*/
#include <stdio.h>
int findRepeatedNumber(int nums[], int n) {
    int seen[n]; // Array to keep track of seen numbers
    for (int i = 0; i < n; i++) {
        if (seen[nums[i]] == 1) {
            return nums[i]; // Return the repeated number
        }
        seen[nums[i]] = 1; // Mark the number as seen
    }
    return -1; // Return -1 if no repeated number is found
}