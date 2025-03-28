#include <stdio.h>


int findUnsortedSubarray(int arr[], int n) {
    int left = 0, right = n - 1;

    
    while (left < n - 1 && arr[left] <= arr[left + 1]) {
        left++;
    }

    
    if (left == n - 1) {
        return 0;
    }

    
    while (right > 0 && arr[right] >= arr[right - 1]) {
        right--;
    }

   
    int min_val = arr[left], max_val = arr[left];
    for (int i = left; i <= right; i++) {
        if (arr[i] < min_val) min_val = arr[i];
        if (arr[i] > max_val) max_val = arr[i];
    }

    
    while (left > 0 && arr[left - 1] > min_val) {
        left--;
    }

    
    while (right < n - 1 && arr[right + 1] < max_val) {
        right++;
    }

    
    return right - left + 1;
}
