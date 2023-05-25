#include<stdio.h>
/**
 *
 *
 */
int main(void)
{
	int i, n = 7;
	int tmp;

	int a[n];

	a[0] = 1;
	a[1] = 2;
	a[2] = 3;
	a[3] = 4;
	a[4] = 5;
	a[5] = 6;
	a[6] = 7;

	printf("Array elements before swapping are: ");
	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i == n)
			break;
	}
	putchar('\n');

	tmp = a[0];
	a[0] = a[n - 1];
	a[n - 1] = tmp;

	printf("Array elements after swapping are: ");
	i = 0;
	while (i < n)
	{
		if (i != n)
		{
			printf("%d", a[i]);
		}
		i++;
	}
	putchar('\n');
	return (0);
}
