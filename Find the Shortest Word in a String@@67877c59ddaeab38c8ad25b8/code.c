#include <stdio.h>
#include <string.h>

void findShortestWord(char str[]) {
    int n = strlen(str);
    if (n == 0) {
        printf("The string is empty.\n");
        return;
    }

    int minLength = n;
    char shortestWord[n + 1];
    int currentLength = 0;
    int wordStart = 0;

    for (int i = 0; i <= n; i++) {
        if (str[i] == ' ' || str[i] == '\0') {  
            if (currentLength < minLength && currentLength > 0) {
                minLength = currentLength;
                strncpy(shortestWord, &str[wordStart], currentLength);
                shortestWord[currentLength] = '\0';
            }
            currentLength = 0;
            wordStart = i + 1;
        } else {
            currentLength++;
        }
    }

    printf("%s\n", shortestWord);
}

int main() {
    char str[1000];

    
   
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';  

    findShortestWord(str);

    return 0;
}
