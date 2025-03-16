#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    scanf("%s",str);
    int freq[256]={0};
    int max=0;
    char maxchar='\0';
    for(int i=0;str[i]!='\0';i++){
        freq[(int)str[i]]++;
    }
    for(int i=0;i<256;i++){
        if (freq[i]>0){
            printf("%c: %d\n",str[i],freq[i]);
            freq[(int)str[i]] = 0;
        }
    }
}