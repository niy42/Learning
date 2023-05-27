#include<unistd.h>
/**
 *
 *
 *
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
void trian(int n)
{
	int i, j;
	if (n > 0)
	{
		i = 1;
		do {
			j = n - i;
			for(; j > 0; j--)
			{
				_putchar('-');
			}
			for (j = 1; j <= i; j++)
			{
				_putchar('*');
			}
			if (i == n)
				break;
			_putchar('\n');
			i++;
		} while (i <= n);
		_putchar('\n');
	}
}
void diag(int n)
{
	int i, j;

	if (n > 0)
	{
		i = 0;
		do {
			j = 0;
			while (j < i)
			{
				_putchar('-');
				j++;
			}
			_putchar('*');
			if (i == n - 1)
				break;
			_putchar('\n');
			i++;
		} while (i < n);
		_putchar('\n');
	}
}
int main(void)
{
	trian(5);
	diag(5);
	
	return (0);
}
