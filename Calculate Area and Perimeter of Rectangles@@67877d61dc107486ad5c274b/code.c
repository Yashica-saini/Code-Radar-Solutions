#include <stdio.h>

struct Rectangle {
    float length;
    float breadth;
};

int main() {
    struct Rectangle r;
    float area, perimeter;

    // Input
 
    scanf("%f", &r.length);

    
    scanf("%f", &r.breadth);

    // Calculations
    area = r.length * r.breadth;
    perimeter = 2 * (r.length + r.breadth);

    // Output
    printf("Area = %.2f\n", area);
    printf("Perimeter = %.2f\n", perimeter);

    return 0;
}
