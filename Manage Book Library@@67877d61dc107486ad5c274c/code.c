#include <stdio.h>
#include <string.h>

#define MAX_BOOKS 100

struct Book {
    int id;
    char title[100];
    char author[100];
    float price;
};

int main() {
    struct Book library[MAX_BOOKS];
    int n;

    // Input: number of books
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &library[i].id);
        getchar();  // to consume newline after integer
        fgets(library[i].title, sizeof(library[i].title), stdin);
        library[i].title[strcspn(library[i].title, "\n")] = '\0';

        fgets(library[i].author, sizeof(library[i].author), stdin);
        library[i].author[strcspn(library[i].author, "\n")] = '\0';

        scanf("%f", &library[i].price);
    }

    // Output
    for (int i = 0; i < n; i++) {
        printf("Book %d: %s by %s, Price = %.2f\n",
               library[i].id, library[i].title, library[i].author, library[i].price);
    }

    return 0;
}
