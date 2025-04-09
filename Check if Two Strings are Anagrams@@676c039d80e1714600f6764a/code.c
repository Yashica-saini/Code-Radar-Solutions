#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

#define MAX 1000

// Helper function to count characters
void countCharacters(char str[], int count[]) {
    for (int i = 0; str[i]; i++) {
        if (str[i] != ' ') {
            count[tolower(str[i])]++;
        }
    }
}

bool isAnagram(char str1[], char str2[]) {
    int count1[256] = {0}, count2[256] = {0};

    countCharacters(str1, count1);
    countCharacters(str2, count2);

    for (int i = 0; i < 256; i++) {
        if (count1[i] != count2[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    char str1[MAX], str2[MAX];

 
    fgets(str1, MAX, stdin);
    str1[strcspn(str1, "\n")] = '\0';


    fgets(str2, MAX, stdin);
    str2[strcspn(str2, "\n")] = '\0';

    if (isAnagram(str1, str2)) {
        printf("YES\n");
    } else {
        printf("NO.\n");
    }

    return 0;
}
