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
    int choice, count = 0;

    while (1) {
       
        scanf("%d", &choice);

        if (choice == 1) {
            if (count < MAX_BOOKS) {
                
                scanf("%d", &library[count].id);
                getchar();  // to clear newline

                
                fgets(library[count].title, 100, stdin);
                library[count].title[strcspn(library[count].title, "\n")] = '\0'; // remove newline

                
                fgets(library[count].author, 100, stdin);
                library[count].author[strcspn(library[count].author, "\n")] = '\0';

               
                scanf("%f", &library[count].price);

                count++;
                
            } else {
                printf("Library is full!\n");
            }
        }

        else if (choice == 2) {
            printf("\n--- Book List ---\n");
            for (int i = 0; i < count; i++) {
                printf("ID: %d\n", library[i].id);
                printf("Title: %s\n", library[i].title);
                printf("Author: %s\n", library[i].author);
                printf("Price: ₹%.2f\n", library[i].price);
                printf("-----------------\n");
            }
        }

        else if (choice == 3) {
            int searchId;
            int found = 0;
            printf("Enter Book ID to search: ");
            scanf("%d", &searchId);

            for (int i = 0; i < count; i++) {
                if (library[i].id == searchId) {
                    printf("Book found:\n");
                    printf("Title: %s\n", library[i].title);
                    printf("Author: %s\n", library[i].author);
                    printf("Price: ₹%.2f\n", library[i].price);
                    found = 1;
                    break;
                }
            }

            if (!found) {
                printf("Book with ID %d not found.\n", searchId);
            }
        }

        else if (choice == 4) {
            printf("Exiting Library System. Goodbye!\n");
            break;
        }

        else {
            printf("Invalid choice. Try again.\n");
        }
    }

    return 0;
}
