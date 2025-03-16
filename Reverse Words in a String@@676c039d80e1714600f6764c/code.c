#include<stdio.h>
#include<string.h>
int main(){
    char str[100],rev[100];
    scanf("%[^\n]",str);
    int len=strlen(str);
    int j=0;
    for(int i=len-1;i>=0;i--){
        rev[j]=str[i];
        j++;
        
    }
    rev[len]='\0';
    printf("%s",rev);
    return 0;
}