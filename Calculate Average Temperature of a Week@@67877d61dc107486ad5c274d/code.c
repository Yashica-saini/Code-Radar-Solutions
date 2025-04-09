#include <stdio.h>
struct Day {
    char name[20];
    int temperature;
};

int main() {
    struct Day week[7];
    float totalTemp = 0;

    for (int i = 0; i < 7; i++) {
        scanf("%s %d", week[i].name, &week[i].temperature);
        totalTemp += week[i].temperature;
    }
    float avgTemp = totalTemp / 7;
    printf("Average Temperature: %.2f\n", avgTemp);

    return 0;
}