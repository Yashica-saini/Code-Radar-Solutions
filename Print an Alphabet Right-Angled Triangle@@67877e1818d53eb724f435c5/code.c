#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        for(int j=1;j<=i;j++){
            int b=1;
            int d=b+63;
            printf("%c",d);
            b++;
        }
        printf("\n");
    }
    return 0;
}