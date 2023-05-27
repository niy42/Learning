#include<stdio.h>
/**
 *
 *
 */
void reset_to_98(int *n)
{
	*n = 98;
}
int main(void)
{
	int n = 56;
	int *p;

	p = &n;
	printf("n before pointer: %d\n", n);

	*p = 36;
	printf("n after pointer: %d\n", *&n);

	*p = 28;
	printf("n after pointer: %d\n", *&n);

	reset_to_98(&n);
	printf("n after pointer declaration: %d\n", *p);
	return (0);
}
