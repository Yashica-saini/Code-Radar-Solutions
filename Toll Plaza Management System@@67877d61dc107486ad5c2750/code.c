// Your code here...
#include<stdio.h>
#include<string.h>
typedef struct vehicle{
    char number[50];
    char type[50];
    int  toll;

}v;
int main(){
    int n;
    scanf("%d",&n);
    v vehicles[100];
    for(int i=0;i<n;i++){
        scanf("%s %s %d",&vehicles[i].number,&vehicles[i].type,&vehicles[i].toll);
    }
    float car_toll=0;
    float truck_toll=0;
    float bike_toll=0;
    for(int i=0;i<n;i++){
        if(strcmp(vehicles[i].type,"Car")==0){
            car_toll+=vehicles[i].toll;
        }
        else if(strcmp(vehicles[i].type,"Truck")==0){
            truck_toll+=vehicles[i].toll;
        }
        else if(strcmp(vehicles[i].type,"Bike")==0){
            bike_toll+=vehicles[i].toll;
        }
    }
    printf("Cars: %.2f, Trucks: %.2f, Bikes: %.2f",car_toll,truck_toll,bike_toll);

}.