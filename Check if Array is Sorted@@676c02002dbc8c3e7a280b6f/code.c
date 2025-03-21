#include <stdio.h>
int main(){
    int n;
    int arr[30];
    scanf("%d",&n);
    for (int i=0;i<=n;i++){
        printf("%d",arr[i]);
    }
    int max;
    for (int i=0;i<=n;i--){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    if(max==arr[n-1]){
        printf("Sorted");
    }
    else{
        printf("Not Sorted");
    }
    return 0;
}