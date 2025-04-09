#include <stdio.h>
struct student{
    int rollno;
    char name[100];
    float marks;
};
int main(){
    int n;
    scanf("%d",&n);
    struct student s[n];
    float threshold;
    int count =0;
    for(int i=0;i<n;i++){
        scanf("%d %s %f",&s[i].rollno, &s[i].name, &s[i].marks);
        }
    scanf("%f",&threshold);
    for(int i=0;i<n;i++){
        if(s[i].marks > threshold){
            count++;
        }
    }
        printf("Count of students scoring above %.2f: %d",threshold,count);
    
    return 0;
}
