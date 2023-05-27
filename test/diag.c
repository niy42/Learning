#include<stdio.h>
/**
 * 
 *
 *
 */
void diag(int n)
{
	int i, j;
	if (n > 0);
	{
		i = 0;
		do {
			j = 0;
			for (; j < i; j++)
			{
				putchar(' ');
			}
			putchar('\\');
			if (i == n - 1)
				break;
			putchar('\n');
			i++;
		} while (i < n);
		printf("\n");
	}
}
int main(void)
{
	diag(5);
	diag(2);
	return (0);

}
