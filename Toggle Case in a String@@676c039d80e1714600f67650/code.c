#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    scanf("%[^\n]",str);
    int len=strlen(str);
    for(int i=0;i>=len;i++){
        if (islower(str[i])){
            str[i]=toupper(str[i]);
        }
        else if(isupper(str[i])){
            str[i]=tolower(str[i]);
        }
    }
    printf("%s",str);
    return 0;
}