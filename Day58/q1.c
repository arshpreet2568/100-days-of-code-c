//Q108: Write a Program to take an integer array nums. Print an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i]. The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

/*
Sample Test Cases:
Input 1:
nums = [1,2,3,4]
Output 1:
[24,12,8,6]

Input 2:
nums = [-1,1,0,-3,3]
Output 2:
[0,0,9,0,0]

*/
#include <stdio.h>
void productExceptSelf(int* nums, int numsSize, int* answer) {
    int leftProduct[numsSize];
    int rightProduct[numsSize];

    // Initialize the left product array
    leftProduct[0] = 1;
    for (int i = 1; i < numsSize; i++) {
        leftProduct[i] = leftProduct[i - 1] * nums[i - 1];
    }

    // Initialize the right product array
    rightProduct[numsSize - 1] = 1;
    for (int i = numsSize - 2; i >= 0; i--) {
        rightProduct[i] = rightProduct[i + 1] * nums[i + 1];
    }

    // Calculate the answer array
    for (int i = 0; i < numsSize; i++) {
        answer[i] = leftProduct[i] * rightProduct[i];
    }
}