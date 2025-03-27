#include <string.h>
void bubbleSort(int n, char arr[n][100]) { 
    char temp[100];

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strcmp(arr[j], arr[j + 1]) > 0) { // Compare adjacent strings
                strcpy(temp, arr[j]);
                strcpy(arr[j], arr[j + 1]);
                strcpy(arr[j + 1], temp);
            }
        }
    }
    for (int i = 0; i < n; i++) {
        printf("%s\n", arr[i]);
}