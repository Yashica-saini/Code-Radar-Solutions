#include<stdio.h>
#include<string.h>
int main(){
    char str[100],rev[100],str2[100];
    scanf("%s",str);
   
    scanf("%s",str2);
    int len=strlen(str);
    int j=0;
    for(int i=len-1;i>=0;i--){
        rev[j]=str[i];
        j++;
    }
    rev[len]='\0';
    if(strcmp(rev,str2)==0){
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }
    return 0;
}