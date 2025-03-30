#include <stdio.h>

int findUnsortedSubarray(int arr[], int n) {
    int start = 0, end = n - 1;

    // Find the first out-of-order element from the left
    while (start < n - 1 && arr[start] <= arr[start + 1]) {
        start++;
    }
    
    // If already sorted, return 0
    if (start == n - 1) return 0;

    // Find the first out-of-order element from the right
    while (end > 0 && arr[end] >= arr[end - 1]) {
        end--;
    }

    return end - start + 1;
}

