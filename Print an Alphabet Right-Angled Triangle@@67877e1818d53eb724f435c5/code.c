#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        int b=1;
        for(int j=1;j<=i;j++){
            
            int d=b+63;
            printf("%d",d);
            b++;
        }
        printf("\n");
    }
    return 0;
}