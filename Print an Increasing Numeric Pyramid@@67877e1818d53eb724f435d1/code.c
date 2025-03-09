#include <stdio.h>
int main(){
int a;
scanf("%d",&a);
for(int i=1;i<=a;i++){
    for (int j=1; j<=a-i;j++){
        printf(" ");
    }
    printf("\n");
    for(int k=1;k<=i;k++){
        if (k<i){
            printf("%d",k)
        }
    }
    
}
return 0;
}