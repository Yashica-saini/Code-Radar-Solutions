#include <stdio.h>

void findPairs(int arr[], int n, int targetSum) {
    printf("Unique pairs with sum %d are:\n", targetSum);
    
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == targetSum) {
                printf("%d %d\n", arr[i], arr[j]);
            }
        }
    }
}

int main() {
    int n, targetSum;

    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter target sum: ");
    scanf("%d", &targetSum);
    
    findPairs(arr, n, targetSum);
    return 0;
}
