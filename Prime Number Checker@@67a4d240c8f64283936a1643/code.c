#include <studio.h>
int isprime(int a){
    if a<=1{
        return 0;
    }
    for (int i=2;i*i<=a;i++){
        if (a%i==0;){
            return 0;
        }
        return 1;
    }
}
int main()
{
    int num;
    scanf("%d",&num);
    if (isprime){
        printf("1");
    }
    else{
        printf("0");
    }
    return 0;
}