#include <stdio.h>

// Function to find the minimum length subarray that needs to be sorted
int findUnsortedSubarray(int arr[], int n) {
    int left = 0, right = n - 1;

    // Find the first element from the left that is out of order
    while (left < n - 1 && arr[left] <= arr[left + 1]) {
        left++;
    }
    
    // If the entire array is sorted
    if (left == n - 1) return 0;

    // Find the first element from the right that is out of order
    while (right > 0 && arr[right] >= arr[right - 1]) {
        right--;
    }

    // Find the min and max in the unsorted subarray
    int minVal = arr[left], maxVal = arr[left];
    for (int i = left; i <= right; i++) {
        if (arr[i] < minVal) minVal = arr[i];
        if (arr[i] > maxVal) maxVal = arr[i];
    }

    // Expand the left boundary if needed
    while (left > 0 && arr[left - 1] > minVal) {
        left--;
    }

    // Expand the right boundary if needed
    while (right < n - 1 && arr[right + 1] < maxVal) {
        right++;
    }

    return right - left + 1;
}

