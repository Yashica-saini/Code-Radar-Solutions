#include<stdio.h>
#include<string.h>
int main(){
    char str[100],rev[100],str2[100];
    scanf("%s",str);
    getchar();
    scanf("%s",str2);
    int len=strlen(str);
    int j=0;
    for(int i=len;i>=0;i--){
        rev[j]=str[i];
        j++;
    }
    rev[len]='\0';
    if(strcmp(rev,str)==0){
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }
    return 0;
}