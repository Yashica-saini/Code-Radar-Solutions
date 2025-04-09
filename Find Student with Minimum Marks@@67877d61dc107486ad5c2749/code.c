#include <stdio.h>
struct student{
    int rollno;
    char name[100];
    float marks;
};
int main(){
    int n;
    scanf("%d",&n);
    
    struct student s[n] , minimummarks;
    for(int i=0;i<n;i++){
        scanf("%d %s %f",&s[i].rollno, s[i].name, &s[i].marks);
        if( i==0 || s[i].marks < minimummarks.marks){
            minimummarks = s[i];
        }
        }
        printf("Student with Minimum Marks: Roll Number: %d, Name: %s, Marks: %.2f", minimummarks.rollno, minimummarks.name, minimummarks.marks);

    return 0;
}