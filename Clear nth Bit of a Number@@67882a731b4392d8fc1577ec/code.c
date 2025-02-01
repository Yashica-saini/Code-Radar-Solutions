#include <stdio.h>
#include <stdiolib.h>

int main() {
    int a,b;
    scanf("%d &d",&a,&b);
    int c=~(b>>1);
    printf("%d",c&a);
    return 0;
}