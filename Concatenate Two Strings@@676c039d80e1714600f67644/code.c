#include<stdio.h>
#include <string.h>
int main(){
    char str1[100];
    char str2[100];
    scanf("%[^\n]",str1);
    scanf("%[^\n]",str2);
    strcat(str1," ");
    strcat(str1,str2);
    printf("%s",str1);
    return 0;
}