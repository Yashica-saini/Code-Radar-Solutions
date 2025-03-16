#include <stdio.h>
#include<string.h>
int main(){
    char str[100];
    scanf("%[^\n]",str);
    char str2[100];
    
    int len=strlen(str);
    for(int i=0;i<len;i++)
    if(str[i]==' '){
        str2=str[i+1];
    }
    else{
        str2=str[i];
    }
    str2[len]='\0';
    printf("%s",str2);
    return 0;
}