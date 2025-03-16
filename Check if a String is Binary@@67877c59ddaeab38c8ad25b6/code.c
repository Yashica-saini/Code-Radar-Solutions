#include <stdio.h>
#include<string.h>
int main(){
    char str[100];
    scanf("%s",str);
    char x;
    int len =strlen(str);
    for(int i=0;i<len;i++){
        if(str[i]=='0'||str[i]==1){
            x='m';
        }
        else{
            x='n';
        }
    }
    if(x=='m'){
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }
}