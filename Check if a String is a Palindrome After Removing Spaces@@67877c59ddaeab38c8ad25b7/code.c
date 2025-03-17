#include <stdio.h>
#include <string.h>
int main(){
    char str[100];
    scanf("%[^\n]",str);
    int len=strlen(str);
    char rev[50];
    int j=0;
    for(int i=len-1;i>=0;i--){
        if(str[i]==' ')continue;
        rev[j]=str[i];
        j++;
    }
    if(strcmp(str,rev)==0){
        printf("Yes\n");
    }
    else{
        printf("No");
    }
}