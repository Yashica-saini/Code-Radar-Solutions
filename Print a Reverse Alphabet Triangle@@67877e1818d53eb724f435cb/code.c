#include <stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    for (int i=a;i>=1;i--){
        int b=1;
        for(int j=1;j<=i;j++){
            int d=b+64;
            char ch=(char)d;
            printf("%c",ch);
            b++;
        }
        printf("\n");
    }
    return 0;
}