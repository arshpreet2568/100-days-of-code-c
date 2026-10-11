//Q109: Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.

/*
Sample Test Cases:
Input 1:
arr[100, 200, 300, 400] = , k = 2
Output 1:
700

Input 2:
arr[1, 4, 2, 10, 23, 3, 1, 0, 20] = , k = 4
Output 2:
39

Input 3:
arr[100, 200, 300, 400] = , k = 1
Output 3:
400

*/
#include <stdio.h>
int maxSumSubarray(int* arr, int arrSize, int k) {
    if (arrSize < k) {
        return -1; // Not enough elements for a subarray of size k
    }

    int maxSum = 0;
    int currentSum = 0;

    // Calculate the sum of the first window of size k
    for (int i = 0; i < k; i++) {
        currentSum += arr[i];
    }
    maxSum = currentSum;

    // Slide the window over the array
    for (int i = k; i < arrSize; i++) {
        currentSum += arr[i] - arr[i - k]; // Add the next element and remove the first element of the previous window
        if (currentSum > maxSum) {
            maxSum = currentSum;
        }
    }

    return maxSum;
}