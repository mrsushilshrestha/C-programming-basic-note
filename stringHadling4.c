#include <stdio.h>
#include <string.h>

void main() {
    char str1[] = "Apple";
    char str2[] = "Banana";
    int result = strcmp(str1, str2);

    if (result == 0)
        printf("Strings are equal.\n");
    else if (result < 0)
        printf("String 1 is less than String 2.\n");
    else
        printf("String 1 is greater than String 2.\n");

    
}

