#include <stdio.h>

int isPrime(int a) {
    if (a <= 1) {
        return 0; 
    }
    for (int i = 2; i * i <= a; i++) {
        if (a % i == 0) {
            return 0; 
        }
    }
    return 1; 
}

int main() {  // Ensure there is only one main function
    int num;
    scanf("%d", &num);
    
    if (isPrime(num)) {
        printf("1\n");
    } else {
        printf("0\n");
    }
    
    return 0;
}

    