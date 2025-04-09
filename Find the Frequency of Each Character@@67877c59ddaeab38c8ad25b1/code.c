
        #include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    scanf("%s", str);

    int freq[256] = {0};

    // Count frequency of each character
    for (int i = 0; str[i] != '\0'; i++) {
        freq[(unsigned char)str[i]]++;
    }

    // Print character frequencies
    for (int i = 0; str[i] != '\0'; i++) {
        if (freq[(unsigned char)str[i]] > 0) {
            printf("%c: %d\n", str[i], freq[(unsigned char)str[i]]);
            freq[(unsigned char)str[i]] = 0; // Mark as printed
        }
    }

    return 0;
}

    }
}