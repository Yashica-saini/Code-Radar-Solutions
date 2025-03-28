#include <stdio.h>

int lowestSetBit(int n) {
    // Perform bitwise AND between n and its negative
    return n & -n;
}

int main() {
    int num;

    
  
    scanf("%d", &num);

    int result = lowestSetBit(num);

    // Display the result
    if (result != 0) {
        printf("%d\n", result);
    } else {
        printf("The number %d has no set bits.\n", num);
    }

    return 0;
}
