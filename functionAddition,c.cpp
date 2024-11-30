#include <stdio.h> 

int add(int a, int b);

int main() { 
int num1 = 5, num2 = 3, result; 
// Call the add function with num1 and num2 
result = add(num1, num2); 
// Print the result 
printf("Sum: %d\n", result);  // Output: Sum: 8 
return 0; 
} 

int add(int a, int b) { 
return a + b;  // Returns the sum of a and b 
} 
