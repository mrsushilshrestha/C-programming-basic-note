#include<stdio.h>

void main() {
    int marks[5],i;

   
    printf("Enter 5 numbers: ");
    for ( i = 0; i < 5; i++) {
        scanf("%d", &marks[i]);
    }

    printf("The Number [Index 0] is: %d\n", marks[0]);
    printf("The Number [Index 4] is: %d\n", marks[4]);
}

