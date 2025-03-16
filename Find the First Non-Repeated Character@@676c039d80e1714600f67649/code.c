#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    char a;
    scanf("%s",str);
    len=strlen(str);
    for(int i=0;i<=len;i++){
        if(str[i]!=a){
        str[i]=a;
        }
    }
    printf("%c",a);
    return 0;
}