#include<stdio.h>
/**
 *
 *
 */
void trian(int n)
{
	int i, j;

	i = 1;
	do {
		j = 0;
		for (; j <= n - i; j++)
		{
			putchar('-');
		}
		for (j = 0; j < i; j++)
		{
			putchar('*');
		}
		if (i == n)
			break;
		putchar('\n');
		i++;
	} while (i <= n);
}
int main(void)
{
	trian(5);
	return (0);
}
