#include <stdio.h>
#include <string.h>

void main() {
    char str1[20] = "Hello, ";
    char str2[20] = "World!";
    strcat(str1, str2);  // Join str2 to str1
    printf("Concatenated String: %s\n", str1);
    
}

