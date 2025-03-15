#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    scanf("%[^\n]",str);
    int len=strlen(str);
    int count=0;
    for(int i=0;i<len;i++){
        if(str[i]==' '){
            count+=1;
        }
    }
    printf("%d",count);
}