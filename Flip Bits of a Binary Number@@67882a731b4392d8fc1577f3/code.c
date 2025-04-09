#include <stdio.h>
#include <string.h>

void flipBits(char binary[]) {
    for (int i = 0; binary[i] != '\0'; i++) {
        if (binary[i] == '0')
            binary[i] = '1';
        else if (binary[i] == '1')
            binary[i] = '0';
    }
}

int main() {
    char binary[100];
    
    scanf("%s", binary);

    flipBits(binary);

    printf(" %s\n", binary);
    return 0;
}
