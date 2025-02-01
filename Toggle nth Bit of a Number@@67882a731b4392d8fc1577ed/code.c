#include <stdio.h>
int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    int c=(a>>b)&1;
    if (c==0){
        printf("1");
    }
    else{
        printf("0");
    }
    return 0;
}