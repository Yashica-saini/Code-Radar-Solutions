#include <stdio.h>
#include <string.h>

void removeDuplicates(char str[]) {
    int n = strlen(str);
    if (n == 0) return;

    int hash[256] = {0};
    int index = 0; 

    for (int i = 0; i < n; i++) {
        if (hash[(int)str[i]] == 0) { 
            str[index++] = str[i];  
            hash[(int)str[i]] = 1;  
        }
    }

    str[index] = '\0'; 
}

int main() {
    char str[100];

    
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; 

    removeDuplicates(str);

    printf("%s\n", str);

    return 0;
}
