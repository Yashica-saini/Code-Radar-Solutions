#include <stdio.h>


int main() {
    int a,b;
    scanf("%d %d",&a, &b);
    if(b == 1){
        if(age>=18){
            printf("Eligible\n");
        }
        else{
            printf("Not Eligible\n");
        } 
    }
    else{
        printf("Not Eligible\n");
    }
    return 0;
}