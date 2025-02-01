#include <stdio.h>
#include <ctype.h>
int main() {
    char a;
    scanf(" %c",&a);
    if (isupper(a)){
        printf("Uppercase\n");
    }
    else{
        printf("Lowercase\n");
    }
    return 0;
}