#include <stdio.h>
#include <string.h>
#include <limits.h>

void findShortestWord(char str[]) {
    int n = strlen(str);
    if (n == 0) {
        printf("The string is empty.\n");
        return;
    }

    int minLength = INT_MAX;
    int startIndex = 0;
    int i = 0;

    while (i <= n) {
        int j = i;
        while (j < n && str[j] != ' ') {
            j++;
        }

        int wordLength = j - i;
        if (wordLength > 0 && wordLength < minLength) {
            minLength = wordLength;
            startIndex = i;
        }

        i = j + 1;
    }

    // Print the shortest word
    for (int k = 0; k < minLength; k++) {
        printf("%c", str[startIndex + k]);
    }
    printf("\n");
}

int main() {
    char input[1000];
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0'; // Remove newline character if present
    findShortestWord(input);
    return 0;
}
