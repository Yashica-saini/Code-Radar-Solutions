#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    scanf(" %[^\n]", str);  // Read input with spaces
    int freq[256] = {0}, max = 0;
    char maxchar = '\0';
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') continue;  // Skip spaces
        freq[(int)str[i]]++;   
        if (freq[(int)str[i]] > max || (freq[(int)str[i]] == max && str[i] < maxchar)) { 
            max = freq[(int)str[i]];
            maxchar = str[i];
        }
    }
    printf("%c\n", maxchar); 
    return 0;
}
