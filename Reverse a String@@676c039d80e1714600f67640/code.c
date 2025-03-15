#include <stdio.h>
#include <string.h>

int main() {
    char str[100];  
    scanf("%s", str);  // Read string input
    int len = strlen(str);  

    for (int i = len - 1; i >= 0; i--) {
        printf("%c", str[i]);  // Print characters in reverse order
    }

    return 0;
}
