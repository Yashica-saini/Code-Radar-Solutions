#include <stdio.h>
#include <string.h>

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
}

int main() {
    char str[1000];

    // Reading input
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; // Remove trailing newline

    // Process
    reverseWordsInString(str);

    // Output
    printf("%s\n", str);

    return 0;
}

