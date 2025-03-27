#include <stdio.h>
#include <string.h>

// Function to perform string compression
void compressString(char *input, char *output) {
    int i, count, index = 0;
    int len = strlen(input);

    for (i = 0; i < len; i++) {
        output[index++] = input[i]; // Store the character
        count = 1;

        // Count consecutive occurrences
        while (i + 1 < len && input[i] == input[i + 1]) {
            count++;
            i++;
        }

        // Append count if greater than 1
        if (count > 1) {
            index += sprintf(output + index, "%d", count);
        }
    }
    output[index] = '\0'; // Null-terminate the compressed string
}