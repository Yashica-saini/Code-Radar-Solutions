#include <stdio.h>
int main(){
    int arr[50];
    int n;
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        scanf("%d",&arr[i]);
    }
    for (int i=n-1;i>=0;i--){

        printf("%d \n",arr[i]);
    }
    return 0;
}