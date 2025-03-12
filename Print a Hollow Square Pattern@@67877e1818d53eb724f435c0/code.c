#include <stdio.h>

int main() {
    int size;
    
    // Asking user for the size of the square
    printf("Enter the size of the square: ");
    scanf("%d", &size);
    
    // Loop to print the square
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            // Print '*' for the border
            if (i == 0 || i == size - 1 || j == 0 || j == size - 1) {
                printf("* ");
            } else {
                // Print space for the inner part of the square
                printf("  ");
            }
        }
        printf("\n");  // Moving to the next line after printing each row
    }
    
    return 0;
}
