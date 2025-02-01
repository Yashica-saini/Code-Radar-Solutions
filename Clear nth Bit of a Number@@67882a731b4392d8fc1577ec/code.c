#include <stdio.h>


int main() {
    int a,b;
    scanf("%d &d",&a,&b);
    int c=~(1<<b);
    printf("%d",a&c);
    return 0;
}