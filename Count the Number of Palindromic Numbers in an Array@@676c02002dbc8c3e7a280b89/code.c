#include <stdio.h>


int isPalindrome(int num) {
    if (num < 0) return 0; 
    int original = num, reversed = 0;
    
    while (num > 0) {
        reversed = reversed * 10 + (num % 10);
        num /= 10;
    }

    return (original == reversed); 
}


int countPalindromes(int arr[], int n) {
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (isPalindrome(arr[i])) {
            count++;
        }
    }

    return count;
}

int main() {
    int n;

    
    scanf("%d", &n);
    int arr[n];

    
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    
    printf("%d\n", countPalindromes(arr, n));

    return 0;
}
