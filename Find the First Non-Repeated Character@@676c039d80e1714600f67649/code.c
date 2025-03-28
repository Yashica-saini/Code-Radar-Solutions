#include <stdio.h>
#include <string.h>

char findFirstNonRepeatedChar(char str[]) {
    int count[256] = {0};  
    int i;

   
    for (i = 0; str[i] != '\0'; i++) {
        count[str[i]]++;
    }

    
    for (i = 0; str[i] != '\0'; i++) {
        if (count[str[i]] == 1) {
            return str[i];
        }
    }

    return '\0';  
}

int main() {
    char str[100];

    
    
    fgets(str, sizeof(str), stdin);

    
    str[strcspn(str, "\n")] = '\0';

    char result = findFirstNonRepeatedChar(str);
    if (result != '\0') {
        printf("%c\n", result);
    } else {
        printf("-\n");
    }

    return 0;
}
