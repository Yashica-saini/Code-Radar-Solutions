#include <stdio.h>
int main(){
    int n;
    int arr[30];
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int count=0;
    int count2=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            count++;
        }
        else{
            count2++;
        }
    }
    printf("%d ",count);
    printf("%d",count2);
    return 0;
    }
