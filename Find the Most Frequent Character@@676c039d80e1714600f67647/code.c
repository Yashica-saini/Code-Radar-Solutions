#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    scanf("%[^\n]",str);
    int freq[256]={0};
    char max='\0';
    for(int i=0;str!=0;i++){
        freq[(int)str[i]]++;
        if(freq(int)str[i]>max){
            max=str[i];
        }
    }
    printf("%c",max);
    return 0;

}