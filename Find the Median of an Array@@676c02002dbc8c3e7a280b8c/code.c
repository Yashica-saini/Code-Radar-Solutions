#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

double findMedian(int arr[], int n) {
    qsort(arr, n, sizeof(int), compare);
    if (n % 2 != 0) {
        return arr[n / 2];
    } else {
        return (arr[n / 2 - 1] + arr[n / 2]) / 2.0;
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("%d\n", findMedian(arr, n));

    return 0;
}
