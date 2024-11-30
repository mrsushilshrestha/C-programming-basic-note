#include <stdio.h>
#include <string.h>

// User-defined function to sort strings
void sortStrings(char arr[10][50], int n) {
    char temp[50];
    int i,j;
    for ( i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (strcmp(arr[i], arr[j]) > 0) {
                strcpy(temp, arr[i]);
                strcpy(arr[i], arr[j]);
                strcpy(arr[j], temp);
            }
        }
    }
}

int main() {
    char strings[10][50];
    int n = 10,i;

    // Input strings
    printf("Enter 10 strings:\n");
    for (i = 0; i < n; i++) {
        scanf("%s", strings[i]);
    }

    // Sort strings using the function
    sortStrings(strings, n);

    // Output sorted strings
    printf("Sorted strings in alphabetical order:\n");
    for (i = 0; i < n; i++) {
        printf("%s\n", strings[i]);
    }

    return 0;
}

