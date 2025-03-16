#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    char a;
    a='\0';
    scanf("%s",str);
    int len=strlen(str);
    for(int i=0;i<=len;i++){
        if(str[i]!=a){
        str[i]=a;
        }
    }
    printf("%s",a);
    return 0;
}