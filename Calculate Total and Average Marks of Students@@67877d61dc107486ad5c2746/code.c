#include <stdio.h>

struct Student {
    int roll;
    char name[100];
    float marks;
};

int main() {
    int n;
    scanf("%d", &n);

    struct Student s[n];
    float total = 0.0;

    for(int i = 0; i < n; i++) {
        scanf("%d %s %f", &s[i].roll, s[i].name, &s[i].marks);
        total += s[i].marks;
    }

    float average = total / n;
    printf("%.2f %.2f", total, average);

    return 0;
}
