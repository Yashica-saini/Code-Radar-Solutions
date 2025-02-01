#include <stdio.h>
int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    int c=~(b<<1);
    printf("%d",a&c);
    return 0;
}