#include <string.h>
void bubblesort(int n,char arr[]){
    char temp[100];
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if strcmp(arr[j],arr[j+1]>0){
                strcpy(temp,arr[j]);
                strcpy(arr[j],arr[j+1]);
                strcpy(arr[j+1],temp);
            }
        }
    }
}
for(int i=0;i<n;i++){
    printf("%s",arr[i]);
}