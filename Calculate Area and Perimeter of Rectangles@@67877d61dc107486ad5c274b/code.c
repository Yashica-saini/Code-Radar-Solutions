#include <stdio.h>

struct Rectangle {
    float length;
    float breadth;
};

int main() {
    int n;
    scanf("%d", &n);

    struct Rectangle r[n];

    for (int i = 0; i < n; i++) {
        scanf("%f %f", &r[i].length, &r[i].breadth);
    }

    for (int i = 0; i < n; i++) {
        float area = r[i].length * r[i].breadth;
        float perimeter = 2 * (r[i].length + r[i].breadth);

        printf("Rectangle %d: Area = %.2f, Perimeter = %.2f\n", i + 1, area, perimeter);
    }

    return 0;
}

