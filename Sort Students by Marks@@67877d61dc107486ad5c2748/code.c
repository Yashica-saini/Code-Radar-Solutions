#include <stdio.h>
#include <string.h>

struct Student {
    int roll;
    char name[100];
    float marks;
};

int main() {
    int n;
    
    scanf("%d", &n);

    struct Student s[n];

    // Input student data
    for (int i = 0; i < n; i++) {
        
        scanf("%d", &s[i].roll);
       
        scanf("%s", s[i].name);
        
        scanf("%f", &s[i].marks);
    }

    // Sort students by marks (descending)
    struct Student temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (s[j].marks < s[j + 1].marks) {
                temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;
            }
        }
    }

    // Display sorted list
  
    for (int i = 0; i < n; i++) {
        printf("Roll Number: %d, Name: %s, Marks: %.2f\n", s[i].roll, s[i].name, s[i].marks);
    }

    return 0;
}
