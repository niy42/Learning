#include<stdio.h>
/**
 *
 *
 */
int main(void)
{
	int num = 10;
	int *p;

	p = &num;
	*p = 32;

	printf("%d", *&num);
	return (0);
}
