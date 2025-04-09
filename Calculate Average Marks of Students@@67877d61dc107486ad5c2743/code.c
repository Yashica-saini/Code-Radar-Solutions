#include <stdio.h>

struct Student {
    int roll;
    char name[100];
    float marks;
};

int main() {
    int n;
    float sum = 0, average;


    scanf("%d", &n);

    struct Student students[n];

    // Input student data
    for (int i = 0; i < n; i++) {
      
        scanf("%d", &students[i].roll);

        scanf("%s", students[i].name);
      
        scanf("%f", &students[i].marks);

        sum += students[i].marks;
    }

    // Calculate average
    average = sum / n;

    // Display average
    printf("Average Marks = %.2f\n", average);

    return 0;
}
