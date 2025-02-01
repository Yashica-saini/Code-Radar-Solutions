#include <stdio.h>
#include <ctype.h>
int main() {
    char a;
    scanf(" %c",&a);
    a=tolower(a);
    if (a=='a'|| a=='e' || a=='i'|| a=='o'|| a=='u'){
        printf("Vowel\n");
    }
    else if(isalpha(a)){
        printf("Consonant\n");
    }
    else if(isdigit(a)){
        printf("Digit\n");
    }
    else {
        printf("Special Character\n");
    }
    return 0;
}