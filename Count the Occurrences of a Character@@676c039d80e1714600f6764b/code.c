#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    scanf("%s",str);
    char n;
    scanf("%c",&n);
    int len=strlen(str);
    int count=0;
    for(int i=0;i<len;i++){
        if(str[i]==n){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}