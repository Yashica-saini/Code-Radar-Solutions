#include <stdio.h>
#include <string.h>
#include <ctype.h>

void replaceVowels(char str[], char replaceWith) {
    int n = strlen(str);

    
    for (int i = 0; i < n; i++) {
        
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
            str[i] = replaceWith;  
        }
    }
}

int main() {
    char str[1000], replaceWith;

   
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; 

   
    scanf("%c", &replaceWith);

    replaceVowels(str, replaceWith);

    printf("%s\n", str);

    return 0;
}
