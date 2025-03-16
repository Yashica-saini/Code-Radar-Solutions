#include<stdio.h>
#include <string.h>
int main(){
    char str1;
    char str2;
    scanf("%[^\n]\n",str1);
    scanf("%[^\n]",str2);
    printf("%[^\n]",str1+str2);
    return 0;
}