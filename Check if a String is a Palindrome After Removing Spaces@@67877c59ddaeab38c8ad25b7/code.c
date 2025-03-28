#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isPalindrome(char str[]) {
    int start = 0;
    int end = strlen(str) - 1;

    // Compare characters from the beginning and end
    while (start < end) {
        // Skip spaces and non-alphabetic characters
        if (str[start] == ' ') {
            start++;
        } else if (str[end] == ' ') {
            end--;
        }
        // Compare the characters (ignore case)
        else if (tolower(str[start]) != tolower(str[end])) {
            return 0;  // Not a palindrome
        } else {
            start++;
            end--;
        }
    }
    return 1;  // It's a palindrome
}

int main() {
    char str[1000];

   
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';  
    if (isPalindrome(str)) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}
