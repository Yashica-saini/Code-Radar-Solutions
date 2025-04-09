// Your code here...

#include<stdio.h>
#include<string.h>
typedef struct movie{
    char name[50];
    char type[50];
    int  price;

}m;
int main(){
    int n;
    scanf("%d",&n);
    m movies[100];
    for(int i=0;i<n;i++){
        scanf("%s %s %d",&movies[i].name,&movies[i].type,&movies[i].price);
    }
    float std_price=0;
    float pr_price=0;
    float vip_price=0;
    for(int i=0;i<n;i++){
        if(strcmp(movies[i].type,"Standard")==0){
            std_price+=movies[i].price;
        }
        else if(strcmp(movies[i].type,"Premium")==0){
            pr_price+=movies[i].price;
        }
        else if(strcmp(movies[i].type,"VIP")==0){
            vip_price+=movies[i].price;
        }
    }
    printf("Standard: %.2f, Premium: %.2f, VIP: %.2f",std_price,pr_price,vip_price);

}