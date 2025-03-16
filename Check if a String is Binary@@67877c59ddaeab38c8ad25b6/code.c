#include <stdio.h>
#include<string.h>
int main(){
    char str[100];
    scanf("%s",str);
    for(int i=0;str[i]!='\0';i++){
        if(str[i]!='0'&&str[i]!='1'){
            printf("No\n");
            return 0;
        }
        
    }
    else{
            printf("Yes\n");
            return 0;
        }
}