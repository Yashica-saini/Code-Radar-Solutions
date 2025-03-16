#include <stdio.h>
#include<string.h>
int main(){
    char str[100],str2[100];
    scanf("%[^\n]",str);
    scanf("%s",str2);
    if(strstr(str,str2)!=NULL){
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }
    return 0;
}