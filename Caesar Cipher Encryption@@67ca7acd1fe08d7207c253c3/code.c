#include <stdio.h>

// Function to encrypt the message using Caesar Cipher
void caesarCipher(char message[], int shift, char encrypted[]) {
    for (int i = 0; message[i] != '\0'; i++) {
        char ch = message[i];

        // Encrypt uppercase letters
        if (ch >= 'A' && ch <= 'Z') {
            encrypted[i] = ((ch - 'A' + shift) % 26) + 'A';
        }
        // Encrypt lowercase letters
        else if (ch >= 'a' && ch <= 'z') {
            encrypted[i] = ((ch - 'a' + shift) % 26) + 'a';
        }
        // Keep other characters unchanged
        else {
            encrypted[i] = ch;
        }
    }
    encrypted[i] = '\0'; // Null terminate the string
}

