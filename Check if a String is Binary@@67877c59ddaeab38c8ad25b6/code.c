#include <stdio.h>
#include<string.h>
int main(){
    char str[100];
    scanf("%s",str);
    char x;
    int len =strlen(str);
    for(int i=0;i<len;i++){
        if(str[i]=='0'&&str[i]=='1'){
            printf("Yes\n");
            return 0;
        }
        else{
            printf("No\n");
            return 0;
        }
    }
}