#include <stdio.h>
#include <stdlib.h>


int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}


void findMinDifferencePair(int arr[], int n) {
    if (n < 2) {
        printf("-1\n");
        return;
    }
    
    qsort(arr, n, sizeof(int), compare);

    int minDiff = abs(arr[1] - arr[0]);
    int pair1 = arr[0], pair2 = arr[1];

    
    for (int i = 1; i < n - 1; i++) {
        int diff = abs(arr[i + 1] - arr[i]);
        if (diff < minDiff) {
            minDiff = diff;
            pair1 = arr[i];
            pair2 = arr[i + 1];
        }
    }

    printf("%d %d\n", pair1, pair2);
}

int main() {
    int n;

    
    scanf("%d", &n);
    int arr[n];
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    findMinDifferencePair(arr, n);
    return 0;
}
