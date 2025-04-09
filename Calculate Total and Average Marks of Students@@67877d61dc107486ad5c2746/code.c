#include <stdio.h>

struct Student {
    int roll;
    char name[100];
    float marks[5];  // Assuming 5 subjects
};

int main() {
    struct Student s;
    float total = 0, average;

    
    scanf("%d", &s.roll);

    
    scanf("%s", s.name);

   
    for (int i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%f", &s.marks[i]);
        total += s.marks[i];
    }

    average = total / 5;

   
    printf("Roll Number: %d\n", s.roll);
    printf("Name: %s\n", s.name);
    printf("Total Marks: %.2f\n", total);
    printf("Average Marks: %.2f\n", average);

    return 0;
}
