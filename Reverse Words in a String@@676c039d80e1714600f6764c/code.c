#include <stdio.h>
#include <string.h>

// Function to reverse characters from index 'start' to 'end'
void reverseWord(char str[], int start, int end) {
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

// Function to reverse each word in the string
void reverseWordsInString(char str[]) {
    int i = 0, start = 0;
    int n = strlen(str);

    while (i <= n) {
        // If current character is space or end of string
        if (str[i] == ' ' || str[i] == '\0') {
            reverseWord(str, start, i - 1); // reverse current word
            start = i + 1; // move to next word
        }
        i++;
    }

    printf("%s\n", str); // Print the final reversed string
}

int main() {
    char str[100];
    scanf("%[^\n]", str); // Read input with spaces
    reverseWordsInString(str);
    return 0;
}
