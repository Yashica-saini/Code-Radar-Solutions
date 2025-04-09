#include <stdio.h>

int main() {
    int a, b;
    
    printf("Enter two numbers:\n");
    scanf("%d %d", &a, &b);

    printf("Before swapping: a = %d, b = %d\n", a, b);

    // Swapping using XOR
    a = a ^ b;
    b = a ^ b;  // Now b = original a
    a = a ^ b;  // Now a = original b

    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}
