// C program for array implementation of stack 
#include <stdio.h>
#include "DataStructS.h"


int main() 
{ 
	struct Stack* stack = createStack(100); 

	push(stack, 10); 
	push(stack, 20); 
	push(stack, 30); 

	printf("%d popped from stack\n", pop(stack)); 

	return 0; 
} 
