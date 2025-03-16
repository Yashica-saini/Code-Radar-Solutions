#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    scanf("%[^\n]",str);
    int freq[256]={0};
    int max=0;
    char maxchar='\0';
    for(int i=0;str[i]!=0;i++){
        freq[(int)str[i]]++;
        if(freq[(int)str[i]]>max){
            max=freq[(int)str[i]];
            maxchar=str[i];
        }
    }
    printf("%c",maxchar);
    return 0;

}