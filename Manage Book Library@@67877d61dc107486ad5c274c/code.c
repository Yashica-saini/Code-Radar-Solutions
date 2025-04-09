
#include <stdio.h>

typedef struct {
    char title[100];
    char author[100];
    float price;
} Book;

void displayBooksAboveThreshold(Book books[], int n, float threshold) {
    printf("Books above price %.2f:\n", threshold);
    for (int i = 0; i < n; i++) {
        if (books[i].price > threshold) {
            printf("Title: %s, Author: %s, Price: %.2f\n", books[i].title, books[i].author, books[i].price);
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);

    Book books[n];

    for (int i = 0; i < n; i++) {
        scanf("%s %s %f", books[i].title, books[i].author, &books[i].price);
    }

    float threshold;
    scanf("%f", &threshold);

    displayBooksAboveThreshold(books, n, threshold);

    return 0;
}
