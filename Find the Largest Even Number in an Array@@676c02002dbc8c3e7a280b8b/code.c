#include <stdio.h>
#include <limits.h>

int findLargestEven(int arr[], int n) {
    int maxEven = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0 && arr[i] > maxEven) {
            maxEven = arr[i];
        }
    }
    return (maxEven == INT_MIN) ? -1 : maxEven;
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("%d\n", findLargestEven(arr, n));

    return 0;
}
