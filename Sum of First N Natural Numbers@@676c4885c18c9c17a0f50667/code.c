#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int sum =0;
    for (i=0;i<=n;i++){
        int sum+=i;
        printf("%d",sum);
    }
    return 0;
}