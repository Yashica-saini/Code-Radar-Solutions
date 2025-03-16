#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    scanf("%[^\n]",str);
    int len=strlen(str);
    int count=0;
    int inword=0;
    for(int i=0;i<len;i++){
        if(str[i]==' '){
            (if inword==0){
                count++;
                inword=1;
            }
            else{
                inword=0;
            }
        }
    }
    printf("%d",count);
}