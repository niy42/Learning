#include<Stdio.h>
/**
 *
 *
 */
int multi(int n)
{
	if(n > 1)
		return (n*multi(n - 1));
}
int main(void)
{
	int a, n;

	n = 5;
	a = multi(n);
	printf("%d", a);
	return (0);
}
