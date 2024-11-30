#include <stdio.h>

// Function prototypes
void addition();
void subtraction();
void multiplication();
void division();

int main() {
    int choice;

    while (1) { 
        printf("\n*** Arithmetic Operations Menu ***\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        // Perform selected operation
        switch (choice) {
            case 1: 
			addition(); 
			break;
			
            case 2:
			subtraction();
			break;
			
            case 3: 
			multiplication(); 
			break;
			
            case 4: 
			division(); 
			break;
			
            default: 
			printf("Invalid choice. Try again!\n");
        }
    }

    return 0;
}

// Function to perform addition
void addition() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Result: %d\n", a + b);
}

// Function to perform subtraction
void subtraction() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Result: %d\n", a - b);
}

// Function to perform multiplication
void multiplication() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Result: %d\n", a * b);
}

// Function to perform division
void division() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Result: %d\n", a / b);
    
}












