#include <stdio.h>

int findDuplicate(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        int index = abs(arr[i]);
        if (arr[index] < 0) {
            return index;
        }
        arr[index] = -arr[index];
    }
    return -1;
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("%d\n", findDuplicate(arr, n));

    return 0;
}
