#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function to reverse a portion of the string
void reverseString(char str[], int start, int end) {
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

// Function to reverse the words in the string
void reverseWords(char str[]) {
    int n = strlen(str);
    
    // Step 1: Reverse the entire string
    reverseString(str, 0, n - 1);
    
    // Step 2: Reverse each word to restore them
    int start = 0;
    for (int i = 0; i <= n; i++) {
        if (str[i] == ' ' || str[i] == '\0') {
            reverseString(str, start, i - 1);
            start = i + 1;
        }
    }
}

int main() {
    char str[1000];
    
    // Taking input
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';  // Remove trailing newline if any
    
    reverseWords(str);
    
    printf("Reversed words string: %s\n", str);
    
    return 0;
}
