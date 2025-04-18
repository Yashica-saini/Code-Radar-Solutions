#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isPalindrome(char str[]) {
    int start = 0;
    int end = strlen(str) - 1;


    while (start < end) {
        
        if (str[start] == ' ') {
            start++;
        } else if (str[end] == ' ') {
            end--;
        }
        
        else if (tolower(str[start]) != tolower(str[end])) {
            return 0;  
        } else {
            start++;
            end--;
        }
    }
    return 1;  
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
