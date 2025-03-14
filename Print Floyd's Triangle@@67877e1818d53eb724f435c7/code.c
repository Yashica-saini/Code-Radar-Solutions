#include <stdio.h>
int main(){
    int a;
    int n=1
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        for(int j=1;j<=i;j++){
            printf("%d",n);
            n++;
        }
        printf("\n");
    }
    return 0;
}