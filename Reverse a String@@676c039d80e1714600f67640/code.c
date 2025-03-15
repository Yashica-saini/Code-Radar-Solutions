#include <stdio.h>
#include <string.h>
int main(){
    char str;
    scanf("%c",&str);
    if(str!="\n"){
        main();
        printf("%c",str);
    }
    
    return 0;}