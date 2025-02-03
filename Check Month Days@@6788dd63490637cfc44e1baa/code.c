#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    if (a==2){
        printf("28");
    }
    else if(a%2==0){
        printf("30");
    }
    else{
        printf("31");
    }
    return 0;
}