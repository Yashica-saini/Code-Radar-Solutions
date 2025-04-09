#include <stdio.h>
#include <string.h>

struct Student {
    int roll;
    char name[100];
    float score;
};

void findTopScorer(struct Student students[], int n) {
    struct Student topScorer = students[0];

    for (int i = 1; i < n; i++) {
        if (students[i].score > topScorer.score) {
            topScorer = students[i];
        }
    }

    // Output in the required format
    printf("Roll Number: %d, Name: %s, Marks: %.2f\n", topScorer.roll, topScorer.name, topScorer.score);
}

int main() {
    int n;
    scanf("%d", &n);

    struct Student students[n];

    for (int i = 0; i < n; i++) {
        scanf("%d %s %f", &students[i].roll, students[i].name, &students[i].score);
    }

    findTopScorer(students, n);

    return 0;
}
