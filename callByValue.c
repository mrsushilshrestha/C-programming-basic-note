#include <stdio.h> 
int add(int num) { 
 int result = num + 5;   
printf("Value inside function: %d\n", result); 

return 0;
} 
int main() { 
int x = 20; 
printf("Original value before function call: %d\n", x); 
// Call the function 
add(x); 
// The value of x is unchanged in main 
printf("Original value after function call: %d\n", x);  // Output: 10 
return 0; 
} 
