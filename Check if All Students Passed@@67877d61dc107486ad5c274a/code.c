#include <stdio.h>

struct Student {
    int roll;
    char name[100];
    float marks;
};

int main() {
    int n, allPassed = 1;
    scanf("%d", &n);

    struct Student s[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &s[i].roll);
        scanf("%s", s[i].name);
        scanf("%f", &s[i].marks);

        printf("DEBUG: %s scored %.2f\n", s[i].name, s[i].marks); // Debug line

        if (s[i].marks < 33) {
            allPassed = 0;
        }
    }

    if (allPassed) {
        printf("All Passed\n");
    } else {
        printf("Not all passed.\n");
        printf("List of students who failed:\n");
        for (int i = 0; i < n; i++) {
            if (s[i].marks < 33) {
                printf("Roll: %d, Name: %s, Marks: %.2f\n", s[i].roll, s[i].name, s[i].marks);
            }
        }
    }

    return 0;
}
