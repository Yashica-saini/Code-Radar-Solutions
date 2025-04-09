#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100], rev[100];
    scanf("%[^\n]", str);  // Read input with spaces

    int j = 0;
    int len = strlen(str);

    for (int i = 0; i < len; i++) {
        char ch = str[i];
        ch = tolower(ch);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || !isalpha(ch)) {
            rev[j] = str[i];  // Keep original case and spacing
            j++;
        }
    }

    rev[j] = '\0';  // Null-terminate the string
    printf("%s\n", rev);
    return 0;
}

