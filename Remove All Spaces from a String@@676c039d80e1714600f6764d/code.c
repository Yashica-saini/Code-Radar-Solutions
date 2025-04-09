#include <stdio.h>
#include <string.h>

int main() {
    char str[100], str2[100];
    scanf("%[^\n]", str);

    int j = 0;
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] != ' ') {
            str2[j++] = str[i];
        }
    }
    str2[j] = '\0';

    printf("%s", str2);
    return 0;
}
