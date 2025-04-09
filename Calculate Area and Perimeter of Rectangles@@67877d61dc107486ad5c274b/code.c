#include <stdio.h>

struct Rectangle {
    float length;
    float breadth;
};

int main() {
    struct Rectangle r;
    float area, perimeter;

    // Input
    printf("Enter length of rectangle: ");
    scanf("%f", &r.length);

    printf("Enter breadth of rectangle: ");
    scanf("%f", &r.breadth);

    // Calculations
    area = r.length * r.breadth;
    perimeter = 2 * (r.length + r.breadth);

    // Output
    printf("Area of rectangle: %.2f\n", area);
    printf("Perimeter of rectangle: %.2f\n", perimeter);

    return 0;
}
