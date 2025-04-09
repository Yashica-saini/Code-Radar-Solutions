#include <stdio.h>

void decimalToBinary(int num) {
    int binary[32];  // For storing binary digits
    int i = 0;

    if (num == 0) {
        printf("0");
        return;
    }

    while (num > 0) {
        binary[i] = num % 2;
        num = num / 2;
        i++;
    }

    // Print in reverse
    for (int j = i - 1; j >= 0; j--)
        printf("%d", binary[j]);
}

int main() {
    int decimal;
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    printf("Binary representation: ");
    decimalToBinary(decimal);
    printf("\n");

    return 0;
}
