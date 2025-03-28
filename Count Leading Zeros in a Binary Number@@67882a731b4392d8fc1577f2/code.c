#include <stdio.h>

int countLeadingZeros(int n) {
    
    if (n == 0) {
        return sizeof(n) * 8; 
    }

    int count = 0;

    
    while ((n & (1 << (sizeof(n) * 8 - 1))) == 0) {
        n <<= 1;  
        count++;  
    }

    return count;
}

int main() {
    int num;

    
    scanf("%d", &num);

    int result = countLeadingZeros(num);

  
    printf("%d\n", result);

    return 0;
}
