#include <stdio.h>


int partition(int arr[], int low, int high) {
    int pivot = arr[high];  
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;
            
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    
    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;

    return i + 1;
}


int quickSelect(int arr[], int low, int high, int k) {
    if (low <= high) {
        int pi = partition(arr, low, high);

        if (pi == k - 1)  
            return arr[pi];

        if (k - 1 < pi)  
            return quickSelect(arr, low, pi - 1, k);

        return quickSelect(arr, pi + 1, high, k);  
    }
    return -1; 
}


int kthSmallest(int arr[], int n, int k) {
    return quickSelect(arr, 0, n - 1, k);
}
