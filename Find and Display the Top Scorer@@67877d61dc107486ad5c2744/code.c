#include <stdio.h>
#include <string.h>


struct Student {
    char name[100];
    int score;
};


void findTopScorer(struct Student students[], int n) {
    struct Student topScorer = students[0]; 

   
    for (int i = 1; i < n; i++) {
        if (students[i].score > topScorer.score) {
            topScorer = students[i];
        }
    }

    // Display the top scorer
    printf("%s\n", topScorer.name);
    printf("%d\n", topScorer.score);
}

int main() {
    int n;

    scanf("%d", &n);

    struct Student students[n];

    
    for (int i = 0; i < n; i++) {
        printf("Enter name of student %d: ", i + 1);
        scanf(" %[^\n]%*c", students[i].name);  
        printf("%s: ", students[i].name);
        scanf("%d", &students[i].score);
    }

    
    findTopScorer(students, n);

    return 0;
}
