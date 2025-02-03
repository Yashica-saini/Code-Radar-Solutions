#include <stdio.h>

int main() {
    char a;
    scanf("%c",&a);
    if (a=='A'){
        printf("Excellent");
    }
    else if('B'){
        printf("Good");
     }
    else if('C'){
        printf("Average");
    }
    else if('D'){
        printf("Below Average");
    }
    else if("F"){
        printf("Fail");
    }
    else{
        printf("Invlid grade");
    }
    return 0;
}