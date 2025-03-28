#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 1000


int countDistinctSubstrings(char str[]) {
    int n = strlen(str);
    int count = 0;
    
   
    char substrings[MAX][MAX];

    
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j <= n; j++) {
           
            int k = 0;
            for (int x = i; x < j; x++) {
                substrings[count][k++] = str[x];
            }
            substrings[count][k] = '\0'; 
            count++;
        }
    }

   
    int distinctCount = 0;
    for (int i = 0; i < count; i++) {
        int isDistinct = 1;
        for (int j = 0; j < i; j++) {
            if (strcmp(substrings[i], substrings[j]) == 0) {
                isDistinct = 0;
                break;
            }
        }
        if (isDistinct) {
            distinctCount++;
        }
    }

    return distinctCount;
}

int main() {
    char str[MAX];

   
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';  

    int result = countDistinctSubstrings(str);
    printf("%d\n", result);

    return 0;
}
