#include<stdio.h>

 int addition(int *num){
 	 *num= *num+5;
 	 printf("The result %d\n",*num);
 	
 	return 0;
 	
 	
 }
 
 
 int main(){
 	int x=20;
 	
 	printf("The original Value is:%d\n",x);
 	 addition(&x);
 	 
 	 
 	 printf("The values After function %d\n", x);
 	 return 0;
 }
 	
