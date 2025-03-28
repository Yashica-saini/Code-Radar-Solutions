#include <stdio.h>

int countTrailingZeros(int n) {
    int count = 0;

  
    if (n == 0) {
        return sizeof(n) * 8;  
    }

    
    while ((n & 1) == 0) {
        n >>= 1;  
        count++;  
    }

    return count;
}

int main() {
    int num;

    
    scanf("%d", &num);

    int result = countTrailingZeros(num);

    
    printf(" %d\n", result);

    return 0;
}
