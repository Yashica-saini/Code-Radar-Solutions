#include <stdio.h>
#include <string.h>

int main() {
    char str[100], rev[100];
    scanf("%[^\n]", str);

    int j = 0;
    int len = strlen(str);

    for (int i = 0; i < len; i++) {
        char ch = str[i];
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            rev[j] = ch;
            j++;
        }
    }

    rev[j] = '\0'; // Null-terminate the string
    printf("%s ", rev);
    return 0;
}
