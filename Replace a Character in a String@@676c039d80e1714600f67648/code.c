#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    scanf("%s",str);
    getchar();
    char n,a;
    scanf("%c",&n);
    getchar();
    scanf(" %c",&a);
    int len=strlen(str);
    for(int i=0;i<len;i++){
    if(str[i]==n){
        str[i]=a;
    }}
    printf("%s",str);
    return 0;
}