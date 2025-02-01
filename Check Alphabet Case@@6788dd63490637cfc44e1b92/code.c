#include <stdio.h>
#include <ctype.h>
int main() {
    char a;
    scanf(" %c",&a);
    if (isupper(a)){
        printf("Uppercase\n");
    }
    else if(islower(a)) {
        printf("Lowercase\n");
    }
    else{
        printf("Not an alphabet");
    }
    return 0;
}