#include<stdio.h>
int subtraction(int num)
{
  
 	num=num-5;
 	printf("The Function Value is :%d\n",num);
 	
 	return 0;
}

int main()
{
	int x=20;
	 printf("The function Before call the function or Original Value: %d\n", x);
	 
	 subtraction(x);
	 
	 printf("The function After Original Value is : %d\n ", x);
	 
	 return 0;
	 
	 
}
