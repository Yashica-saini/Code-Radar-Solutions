#include <stdio.h>



int main() {
    char str1[100],str2[100];
    int a;
    scanf("%s %d %s",&str1 ,&a, &str2);
    printf("Name: %s\n",str1);
    printf("Age: %d\n",a);
    printf("Hobby: %s",str2);
    return 0;

}