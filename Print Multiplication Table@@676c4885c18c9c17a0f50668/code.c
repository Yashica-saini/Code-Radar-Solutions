#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for (int i=0;i<=10;i++){
        printf("%d X %d = %d",n,i,n*i);
    }
    return 0;
}