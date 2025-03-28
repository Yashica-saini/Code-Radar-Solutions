#include <stdio.h>
#include <string.h>
#include <ctype.h>


void reverseString(char str[], int start, int end) {
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

void reverseWords(char str[]) {
    int n = strlen(str);
    
    
    reverseString(str, 0, n - 1);
    
    
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
    
    
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';  
    
    reverseWords(str);
    
    printf("%s\n", str);
    
    return 0;
}
