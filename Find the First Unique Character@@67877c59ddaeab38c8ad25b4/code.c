#include <stdio.h>
#include <string.h>

char findFirstUniqueCharacter(char str[]) {
    int n = strlen(str);
    if (n == 0) return '\0';

    int hash[256] = {0};  
    
    for (int i = 0; i < n; i++) {
        hash[(int)str[i]]++;
    }

    
    for (int i = 0; i < n; i++) {
        if (hash[(int)str[i]] == 1) {
            return str[i];
        }
    }

    return '\0';  
}

int main() {
    char str[100];

   
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';  
    char result = findFirstUniqueCharacter(str);

    if (result != '\0') {
        printf("%c\n", result);
    } else {
        printf("-\n");
    }

    return 0;
}
