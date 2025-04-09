#include <stdio.h>

struct Student {
    int roll;
    char name[100];
    float marks;
};

int main() {
    int n;

    
    scanf("%d", &n);

    struct Student students[n];

    // Input student data
    for (int i = 0; i < n; i++) {
        
       
        scanf("%d", &students[i].roll);
       
        scanf("%s", students[i].name);
        
        scanf("%f", &students[i].marks);
    }

    // Display student data
    
    for (int i = 0; i < n; i++) {
        printf("Roll No: %d, Name: %s, Marks: %.2f\n",
               students[i].roll,
               students[i].name,
               students[i].marks);
    }

    return 0;
}
