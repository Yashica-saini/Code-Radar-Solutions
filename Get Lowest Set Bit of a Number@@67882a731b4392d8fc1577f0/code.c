#include <stdio.h>

int lowestSetBit(int n) {
    // Perform bitwise AND between n and its negative
    return n & -n;
}

int main() {
    int num;

    // Taking input from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    int result = lowestSetBit(num);

    // Display the result
    if (result != 0) {
        printf("The lowest set bit of %d is: %d\n", num, result);
    } else {
        printf("The number %d has no set bits.\n", num);
    }

    return 0;
}
