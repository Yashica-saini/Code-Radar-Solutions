#include <stdio.h>

int flipBits(int num) {
    return ~num;
}

int main() {
    int num;
  
    scanf("%d", &num);

    int flipped = flipBits(num);
    printf("%d\n", flipped);

    return 0;
}

