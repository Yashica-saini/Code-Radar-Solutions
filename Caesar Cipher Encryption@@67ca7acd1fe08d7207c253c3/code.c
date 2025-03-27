#include <stdio.h>

// Function to encrypt the given text using Caesar Cipher
void caesarCipherEncrypt(char text[], int shift) {
    for (int i = 0; text[i] != '\0'; i++) {
        char ch = text[i];

        // Encrypt uppercase letters
        if (ch >= 'A' && ch <= 'Z') {
            text[i] = ((ch - 'A' + shift) % 26) + 'A';
        }
        // Encrypt lowercase letters
        else if (ch >= 'a' && ch <= 'z') {
            text[i] = ((ch - 'a' + shift) % 26) + 'a';
        }
    }
}

// Function to decrypt the given text using Caesar Cipher
void caesarCipherDecrypt(char text[], int shift) {
    for (int i = 0; text[i] != '\0'; i++) {
        char ch = text[i];

        // Decrypt uppercase letters
        if (ch >= 'A' && ch <= 'Z') {
            text[i] = ((ch - 'A' - shift + 26) % 26) + 'A';
        }
        // Decrypt lowercase letters
        else if (ch >= 'a' && ch <= 'z') {
            text[i] = ((ch - 'a' - shift + 26) % 26) + 'a';
        }
    }
}