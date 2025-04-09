#include <stdio.h>

struct Student {
    int roll;
    char name[100];
    float marks;
};

int main() {
    int n;
    float sum = 0, average;

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

        sum += students[i].marks;
    }

    // Calculate average
    average = sum / n;

    // Display average
    printf("\nAverage Marks of %d Students = %.2f\n", n, average);

    return 0;
}
