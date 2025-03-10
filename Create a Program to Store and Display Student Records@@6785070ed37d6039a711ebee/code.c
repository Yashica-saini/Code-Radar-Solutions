#include <stdio.h>
struct student{
    int rollno;
    char name[50];
    float marks;
};
int main()
{
    int n;
    scanf("%d",&n);
    struct student s[n];
    for (int i=0;i<n;i++){
        scanf("%d\n",&n);
        scanf("%c",&s[i].name);
        scanf("%.2f",&s[i].marks);
}
for(int i=1;i<n;i++){
    printf("Roll Number: %d",s[i].rollno);
    printf("Name: %s",s[i].name);
    printf("Marks: %.2f",s[i].marks);
    }
    return 0;
}