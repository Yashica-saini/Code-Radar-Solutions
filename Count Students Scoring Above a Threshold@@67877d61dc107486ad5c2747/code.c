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
    for(int i = 0; i < n; i++) {
        scanf("%d %s %f", &s[i].roll, s[i].name, &s[i].marks);
    }

    float threshold;
    scanf("%f", &threshold);

    int count = 0;
    for(int i = 0; i < n; i++) {
        if(s[i].marks > threshold) {
            count++;
        }
    }

    printf("%d", count);
    return 0;
}
