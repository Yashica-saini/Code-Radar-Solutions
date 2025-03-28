#include <stdio.h>
#include <string.h>


void findLargestPalindrome(char str[]) {
    int n = strlen(str);
    if (n == 0) {
        printf("No palindrome found.\n");
        return;
    }

    int start = 0, maxLength = 1;

   
    int expandAroundCenter(int left, int right) {
        while (left >= 0 && right < n && str[left] == str[right]) {
            left--;
            right++;
        }
        return right - left - 1; 
    }

    for (int i = 0; i < n; i++) {
        
        int len1 = expandAroundCenter(i, i);

        
        int len2 = expandAroundCenter(i, i + 1);

       
        int len = len1 > len2 ? len1 : len2;
        if (len > maxLength) {
            maxLength = len;
            start = i - (maxLength - 1) / 2;
        }
    }

    
   
    for (int i = start; i < start + maxLength; i++) {
        printf("%c", str[i]);
    }
    printf("\n");
}

int main() {
    char str[100];

    
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';  

    findLargestPalindrome(str);
    return 0;
}
