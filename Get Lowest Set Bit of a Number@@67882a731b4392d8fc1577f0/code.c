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
        printf("The lowest set bit of %d is: %d\n", num, result);
        printf("The position of the lowest set bit is: %d\n", position);
    } else {
        printf("The number %d has no set bits.\n", num);
    }

    return 0;
}
