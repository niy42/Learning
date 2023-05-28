#include<stdio.h>
/**
 *
 */
int _atoi(char *s)
{
	int i, res;
	signed int sign = 1;
	unsigned int n = 0;

	i = 0;
	do {
		if (s[i] == '-')
			sign *= -1;
		else if (s[i] >= '0' && s[i] <= '9')
			n = n * 10 + (s[i] - '0');
		i++;
	} while (s[i] != '\0');
		res = n * sign;
		return (res);
}
int main(void)
{
	char *s = "-2345";
	int res = _atoi(s);

	printf("%d", res);
	return (0);
}
