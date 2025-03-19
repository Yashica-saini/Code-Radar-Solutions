#include <stdio.h>
#include <string.h>
int main(){
    char str[100];
    scanf("%[^\n]",str);
    int len=strlen(str);
    char rev[100];
    char cleanstr;
    int j=0;
    int m=0;
    for(int i=0;i<len;i++){
        if(str[i]!=' '){
            cleanstr[j]=str[i];
            j++;
        }
    }
    int j=0;

    for(int i=len-1;i>=0;i--){
        if(str[i]==' ')continue;
        rev[j]=str[i];
        j++;
    }
    rev[j]='\0';
   
    if(strcmp(cleanstr,rev)==0){
        printf("Yes\n");
    }
    else{
        printf("No");
    }
    
}