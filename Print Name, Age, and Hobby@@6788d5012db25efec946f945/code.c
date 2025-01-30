#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char str1[100],str2[100];
    int a;
    scanf("%s %d %s",str1,a,str2);
    printf("Name: %s",str1);
    printf("Age: %d",a);
    printf("Hobby: %s",str2);
    return 0;

}