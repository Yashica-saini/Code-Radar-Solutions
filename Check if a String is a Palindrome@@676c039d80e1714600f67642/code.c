#include <stdio.h>
#include<string.h>
int main(){
    char str[100],rev[100];
    scanf("%s",str);
    strcpy(rev,str);
    int len=strlen(str);
    for(int i=len-1;j=0;i>=0;i--;j++){
        rev[j]=str[i];
        rev[len]='\0';
    }
    if(strcmp(str,rev)==0){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}