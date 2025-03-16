#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char str;
    scanf("%s",str);
    int len=strlen(str);
    for(int i=0;i<=len;i++){
        str=toupper(str[i]);
    }
    printf("%s",str);
    return 0;
}