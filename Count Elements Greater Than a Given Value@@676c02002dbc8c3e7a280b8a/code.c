#include <stdio.h>

int countGreater(int arr[], int n, int x) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > x) {
            count++;
        }
    }
    return count;
}

int main() {
    int n, x;
    scanf("%d %d", &n, &x);  // Read n and x in a single line

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);  // Read array elements correctly
    }

    printf("%d\n", countGreater(arr, n, x));

    return 0;
}

