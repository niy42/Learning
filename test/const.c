#include<stdio.h>
/**
 *
 *
 */
int main(void)
{
	char a = 'a';
	char b = 'b';
	/* in a *const we can't assign a new variable*/
	char *const constant_pointer = &a;/* cannot be reassigned to another variable
					but can modify the value of variable it points to*/
	char const *pointer_to_const;/*can be reassigned to another variable*/
				/*but cannot modify the value of the variable it points to*/
	
	pointer_to_const = &a;
	/*(*pointer_to_const = 'x'); cannot modify the value in the variable it points to*/
	printf("a reassigned to pointer_to_const: %c\n", *pointer_to_const);

	pointer_to_const = &b;
	printf("b reassigned to pointer_to_const: %c\n", *pointer_to_const);

	*constant_pointer = 'y';
	printf("a is modified by constant_pointer: %c\n", *constant_pointer);

	*constant_pointer = 'z';/*const pointer can modify value in assigned variable
				  but cannot be reassigned to a new variable*/
	printf("a is modified by constant pointer: %c\n", *constant_pointer);
	return (0);
}
