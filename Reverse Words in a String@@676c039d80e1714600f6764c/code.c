#include<stdio.h>
#include<string.h>
int main(){
    char str[100],rev[100];
    scanf("%[^\n]",str);
    rev[j]='\0';
    int len=strlen(str);
    int j=0;
    for(int i=len-1;i>=0;i--){
        rev[j]=str[i];
        j++;
    }
    printf("%s",rev[j]);
    return 0;
}