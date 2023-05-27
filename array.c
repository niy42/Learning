#include<stdio.h>
/**
 *
 *
 */
int main(void)
{
	int array[6];

	array[0] = 1;
	array[1] = 2;
	putchar('\n');
	printf("array address is: %zu\n", array);
	printf("&array address is: %zu\n\n", &array);

	printf("array + 1 address is: %zu\n", array + 1);
	printf("&array + 1 address is: %zu\n", &array + 1);
	return (0);
}
