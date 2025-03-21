#include <stdio.h>
int main(){
    int arr[50];
    int n;
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        scanf("%d",&arr[i]);
    }
    for (int i=n;i<=0;i--){

        printf("%d",arr[i]);
    }
    return 0;
}