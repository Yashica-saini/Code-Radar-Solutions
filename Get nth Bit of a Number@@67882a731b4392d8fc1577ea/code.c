#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    if (a&1){
        printf("1");
    }
    else{
        printf("0");
    }
    return 0;
}