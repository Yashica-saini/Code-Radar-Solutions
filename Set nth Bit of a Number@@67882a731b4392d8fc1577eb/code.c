#include <stdio.h>

int setNthBit(int num, int n) {
    return num | (1 << n);
}

int main() {
    int number, n;
    

    scanf("%d", &number);
    

    scanf("%d", &n);

    int result = setNthBit(number, n);
    printf("%d\n", n, result);

    return 0;
}
