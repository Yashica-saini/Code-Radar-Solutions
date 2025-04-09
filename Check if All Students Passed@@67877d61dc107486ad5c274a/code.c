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

        if (s[i].marks < 50) {
            allPassed = 0;
        }
    }

    if (allPassed) {
        printf("All Passed\n");
    } else {
        printf("Not All passed\n");
       
        
    }

    return 0;
}
