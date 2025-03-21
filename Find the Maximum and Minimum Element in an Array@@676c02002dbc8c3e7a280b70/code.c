#include <stdio.h>
int main(){
    int n;
    int arr[30];
    scanf("%d",&n);
    for (int i=0;i<=n;i++){
        scanf("%d",&arr[i]);
    }
    int max;
    int min;
    min=0;
    max=0;
    for(int i=0;i<=n;i++){
        if(arr[i]>arr[i+1]){
            max=arr[i+1];
        }
    }
    for(int i=0;i<=n;i++){
        if(arr[i]<arr[i+1]){
            min=arr[i];
        }
    }
    printf("%d",max);
    printf("%d",min);
    return 0;
}