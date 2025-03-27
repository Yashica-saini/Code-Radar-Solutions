#include <stdio.h>
#include <limits.h>


int findSecondSmallest(int arr[], int n) {
    if (n < 2) return -1; 

    int firstMin = INT_MAX, secondMin = INT_MAX;

   
    for (int i = 0; i < n; i++) {
        if (arr[i] < firstMin) {
            secondMin = firstMin;
            firstMin = arr[i];
        } else if (arr[i] > firstMin && arr[i] < secondMin) {
            secondMin = arr[i];
        }
    }

    return (secondMin == INT_MAX) ? -1 : secondMin;
}

int main() {
    int n;

    scanf("%d", &n);
    int arr[n];

   
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

   
    printf("%d\n", findSecondSmallest(arr, n));

    return 0;
}
