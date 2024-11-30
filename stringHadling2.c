#include <stdio.h>
#include <string.h>

void main() {
    char str1[] = "World";
    char str2[20];
    strcpy(str2, str1);  // Copy str1 to str2
    printf("Copied String: %s\n", str2);
   
}

