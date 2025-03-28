#include <stdio.h>

int lowestSetBit(int n) {
    
    return n & -n;
}

int lowestSetBitPosition(int n) {
    
    int pos = 1;
    while ((n & 1) == 0) {  // Check if the lowest bit is not set
        n >>= 1;  // Right shift the number by 1
        pos++;    // Increment the position
    }
    return pos;
}

int main() {
    int num;

    // Taking input from the user
   
    scanf("%d", &num);

    int result = lowestSetBit(num);
    int position = lowestSetBitPosition(num);

    // Display the result
    if (result != 0) {
        printf("%d\n", num, result);
        printf("%d\n", position-1);
    } else {
        printf("The number %d has no set bits.\n", num);
    }

    return 0;
}
