#include <stdio.h>
#include <string.h>
int main(){
    char str[100];
    scanf("%s",str);
    char temp=str;
    char r;
    int len=strlen(str);
    for(int i=len-1;i>=0;i--){
          char  r=str[i];
    }
    if(temp==r){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}