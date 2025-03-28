#include <stdio.h>

int flipBits(int n) {
    
    int numBits = sizeof(n) * 8;  
    
    
    return n ^ ((1 << numBits) - 1);
}

int main() {
    int num;

    
    
    scanf("%d", &num);

    int result = flipBits(num);

    
    printf("%d\n", result);

    return 0;
}
