#include <stdio.h>
#include<string.h>
int main(){
    char str[100];
    scanf("%[^\n]",str);
    char str2[100];
    int len=strlen(str);
    int j=0;
    for(int i=0;i<len;i++){
        if(str[i]==' ')continue;
        str2[j]=str[i];
        j++;
    }
    printf("%s",str2);
    return 0;
}