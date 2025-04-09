#include <stdio.h>
#include <string.h>
#include <ctype.h>

void reverseWord(char str[], int start, int end) {
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

void reverseWordsInString(char str[]) {
    int i = 0, start = 0;
    int n = strlen(str);

    while (i <= n) {
        if (str[i] == ' ' || str[i] == '\0') {
            reverseWord(str, start, i - 1);
            start = i + 1;
        }
        i++;
    }

    printf("Reversed words: %s\n", str);
}

int main() {
    char str[1000];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; // Remove newline character

    reverseWordsInString(str);

    return 0;
}
