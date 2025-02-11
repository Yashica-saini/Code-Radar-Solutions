#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    sum=0;
    for (int i=0;i<=n;i++){
        int sum += i;
        printf("%d\n",sum);
    }
    return 0;
}