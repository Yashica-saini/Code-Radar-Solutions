#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    int b=sizeof(a)*8;
    msb=(a>>(b-1)) & 1;
    if (msb==1){
        printf("Set");
    }
    else{
        printf("Not Set");
    }
    return 0;
}