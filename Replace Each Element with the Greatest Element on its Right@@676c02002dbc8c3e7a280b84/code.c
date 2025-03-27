#include <stdio.h>


void replaceWithGreatest(int arr[], int n) {
    int maxRight = -1; 

    
    for (int i = n - 1; i >= 0; i--) {
        int temp = arr[i];  
        arr[i] = maxRight;  
        if (temp > maxRight) {
            maxRight = temp; 
        }
    }
}


void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n;

   
    scanf("%d", &n);
    int arr[n];

    
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

   
    replaceWithGreatest(arr, n);

    
    printArray(arr, n);

    return 0;
}
