#include <stdio.h>
#include <string.h>

struct Student {
    int roll;
    char name[100];
    float marks;
};

int main() {
    int n, searchRoll, found = 0;

    
    scanf("%d", &n);

    struct Student students[n];

    // Input student data
    for (int i = 0; i < n; i++) {
        
        scanf("%d", &students[i].roll);
        
        scanf("%s", students[i].name);
        
        scanf("%f", &students[i].marks);
    }

    // Search by roll number
    
    scanf("%d", &searchRoll);

    for (int i = 0; i < n; i++) {
        if (students[i].roll == searchRoll) {
            
            printf("Roll Number: %d, ", students[i].roll);
            printf("Name: %s,", students[i].name);
            printf(" Marks: %.2f", students[i].marks);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Student not found\n", searchRoll);
    }

    return 0;
}
