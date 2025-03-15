#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    scanf("%s",str);
    int count=0;
    int len=strlen(str);
    for(int i=0;i<=len;i++){
        if(i=='a'||i=='e'||i=='i'||i=='o'||i=='u'){
            count+=1;
        }

    }
    printf("%d",count);
    return 0;
}