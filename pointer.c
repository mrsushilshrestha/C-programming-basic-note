#include <stdio.h>

int main() {
    int num = 42;          // Declare an integer variable
    int *ptr = &num;       // Declare a pointer and store the address of num

    // Print the value and address of num
    printf("Value of num: %d\n", num);
    printf("Address of num: %p\n", &num);

    // Print the value stored in pointer and the value it points to
    printf("Value stored in pointer (address of num): %p\n", ptr);
    printf("Value pointed to by pointer: %d\n", *ptr);

    // Modify the value of num using the pointer
    *ptr = 100;
    printf("New value of num: %d\n", num);

    return 0;
}

