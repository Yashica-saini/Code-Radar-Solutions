#include <stdio.h>

struct Student {
    int rollNumber;
    char name[50];
    float marks;
};

char getGrade(float marks) {
    if (marks >= 85) return 'A';
    else if (marks >= 70) return 'B';
    else return 'C';
}

int main() {
    int n;
    scanf("%d", &n); 

    struct Student students[n];

    for (int i = 0; i < n; i++) {
        scanf("%d %s %f", &students[i].rollNumber, students[i].name, &students[i].marks);
    }

    for (int i = 0; i < n; i++) {
        printf("Roll Number: %d, Name: %s, Grade: %c\n", 
               students[i].rollNumber, students[i].name, getGrade(students[i].marks));
    }

    return 0;
}