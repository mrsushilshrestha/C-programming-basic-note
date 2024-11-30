#include <stdio.h>

int main() {
    FILE *ptr;  // ptr pointer declaration
    char text[100];  // Buffer to store text

    // Writing to a ptr
    ptr = fopen("example.txt", "w");  // Open ptr in write mode
    if (ptr == NULL) {
        printf("Error opening ptr for writing.\n");
        return 1;
    }
    fprintf(ptr, "Hello, this is a simple ptr handling example in C.\n");
    fclose(ptr);  // Close the ptr after writing

    // Reading from a ptr
    ptr = fopen("example.txt", "r");  // Open ptr in read mode
    if (ptr == NULL) {
        printf("Error opening ptr for reading.\n");
        return 1;
    }
    printf("Reading from the file:\n");
    while (fgets(text, sizeof(text), ptr) != NULL) {
        printf("%s", text);  // Print the content read from the ptr
    }
    fclose(ptr);  // Close the ptr after reading

    return 0;
}

