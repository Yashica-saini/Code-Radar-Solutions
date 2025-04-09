#include <stdio.h>
#include <string.h>

struct Student {
    int roll;
    char name[100];
    float marks;
};

int main() {
    int n, searchRoll, found = 0;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct Student students[n];

    // Input student data
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &students[i].roll);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    // Search by roll number
    printf("\nEnter roll number to search: ");
    scanf("%d", &searchRoll);

    for (int i = 0; i < n; i++) {
        if (students[i].roll == searchRoll) {
            printf("\nStudent Found:\n");
            printf("Roll Number: %d\n", students[i].roll);
            printf("Name: %s\n", students[i].name);
            printf("Marks: %.2f\n", students[i].marks);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("\nStudent with roll number %d not found.\n", searchRoll);
    }

    return 0;
}
