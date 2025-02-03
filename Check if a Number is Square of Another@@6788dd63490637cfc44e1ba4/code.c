#include <stdio.h>

int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    if (b==a*a){
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }
    return 0;
}