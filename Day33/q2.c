//Q66: Insert an element in a sorted array at the appropriate position.

/*
Sample Test Cases:
Input 1:
5
1 2 4 5 6
3
Output 1:
1 2 3 4 5 6

*/
#include <stdio.h>
void insertInSortedArray(int arr[], int *size, int element) {
    int i;
    for (i = *size - 1; (i >= 0 && arr[i] > element); i--) {
        arr[i + 1] = arr[i]; // Shift elements to the right
    }
    arr[i + 1] = element; // Insert the new element
    (*size)++; // Increase the size of the array
}