#include <stdio.h>
#include <string.h>

void findLongestWord(char str[]) {
    int maxLength = 0;
    int currentLength = 0;
    char longestWord[100];
    char currentWord[100];

    int i = 0, j = 0;

    while (str[i] != '\0') {
        
        if (str[i] != ' ') {
            currentWord[j++] = str[i];
        } else {
            
            currentWord[j] = '\0';

            
            if (currentLength > maxLength) {
                maxLength = currentLength;
                strcpy(longestWord, currentWord);
            }

        
            j = 0;
            currentLength = 0;
        }

        
        currentLength++;
        i++;
    }

    
    currentWord[j] = '\0';
    if (currentLength > maxLength) {
        strcpy(longestWord, currentWord);
    }

    printf(" %s\n", longestWord);
}

int main() {
    char str[100];

    
    
    fgets(str, sizeof(str), stdin);

    
    str[strcspn(str, "\n")] = '\0';

    findLongestWord(str);
    return 0;
}
