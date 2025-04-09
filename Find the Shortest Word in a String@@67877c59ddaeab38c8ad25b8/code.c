#include <stdio.h>
#include <string.h>

void findShortestWord(char str[]) {
    int n = strlen(str);
    if (n == 0) {
        printf("The string is empty.\n");
        return;
    }

    int minLength = n;    // Initially, assume the shortest word is the whole string
    char shortestWord[n + 1];
    int currentLength = 0;
    int wordStart = 0;

    for (int i = 0; i <= n; i++) {
        if (str[i] == ' ' || str[i] == '\0') {  // End of a word
            if (currentLength < minLength) {
                minLength = currentLength;
                strncpy(shortestWord, &str[wordStart], currentLength);
                shortestWord[currentLength] = '\0';  // Null-terminate the shortest word
            }
            currentLength = 0;
            wordStart = i + 1;  // Start of next word
        } else {
            currentLength++;
        }
    }

    // Output the shortest word found
    printf("%s", shortestWord);
}

int main() {
    char str[1000];

    // Taking input
    
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';  // Remove trailing newline if any

    findShortestWord(str);

    return 0;
}
