#include <stdio.h>
int main(){
    int n;
    int arr[30];
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int issorted;
    issorted=0;
    if(n==1){
        printf("Sorted");
        break;
    }
    for(int i=0;i<n;i++){
        if (arr[i]<=arr[i+1]){
            issorted=0;
            break;
        }
        
        else{
            issorted=1;
            break;
        }
    }
    if(issorted==0){
        printf("Sorted");
    }
    else{
        printf("Not Sorted");
    }
    return 0;
}