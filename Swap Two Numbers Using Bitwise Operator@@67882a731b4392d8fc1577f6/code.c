#include <stdio.h>

int main() {
    int a, b;
    

    scanf("%d %d", &a, &b);

  

    // Swapping using XOR
    a = a ^ b;
    b = a ^ b;  // Now b = original a
    a = a ^ b;  // Now a = original b

    printf("%d %d\n", a, b);

    return 0;
}
