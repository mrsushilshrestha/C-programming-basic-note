#include <stdio.h>

void myFunction() {
    int localVar = 10;  // Local variable
    printf("Local Variable: %d\n", localVar);
}

int main() {
   myFunction();  // Calls the function and prints the local variable
    // printf("%d", localVar);  // This would cause an error as localVar is not accessible here
    return 0;
}

