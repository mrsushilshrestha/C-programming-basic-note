#include <stdio.h> 
void addFive(int *num) { 
*num = *num + 5; 

printf("Function Value:%d\n",*num);        
} 



int main() { 
int x = 10; 
// Modify the original value using the pointer 
printf("Original value before function call: %d\n", x); 
// Call the function and pass the address of x 
addFive(&x); 
// The value of x is modified in main 
printf("Original value after function call: %d\n", x);  // Output: 15 
return 0;

}
