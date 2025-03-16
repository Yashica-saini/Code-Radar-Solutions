#include<stdio.h>
#include <string.h>
int main(){
    char str1;
    char str2;
    scanf("%[^\n]\n",str1);
    scanf("%[^\n]",str2);
    strcat(str1," ");
    strcat(str1,str2);
    printf("%s",str1);
    return 0;
}