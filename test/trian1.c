#include<stdio.h>
/**
 *
 *
 */
void trian(int n)
{
	int i, j;
	if (n > 0)
	{
		i = 1;
		do {
			j = 1;
			for (; j <= n - i; j++)
			{
				putchar('-');
			}
			for (j = 1; j <= i; j++)
			{
				putchar('*');
			}
			if (i == n)
				break;
			putchar('\n');
			i++;
		} while (i <= n);
		putchar('\n');
	}
}
int main(void)
{
	trian(5);
	return (0);
}
