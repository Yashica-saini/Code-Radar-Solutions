#include<stdio.h>
#include<string.h>
int main(){
    char str[100],rev[100];
    scanf("%[^\n]",str);
    int j=0;
    int len=strlen(str);
    for(int i=0;i<=len;i++){
        if(str[i]!='a'||str[i]!='e';str[i]!='i'||str[i]!='o'||str[i]!='u')continue;
        rev[j]=str[i];
        j++;
    }
    printf("%s",rev);
    return 0;
}