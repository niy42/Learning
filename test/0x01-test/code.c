#include<stdio.h>
/**
 *
 */
int _atoi(char *s)
{
	signed int sign = 1;
	unsigned int num = 0;
	do {
		if (*s == '-')
		{
			sign *= -1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			num *= 10;
			num += *s - '0';
		}
		s++;
	} while (*s != '\0');
	return (sign * num);
}
int main(void)
{
	char s[] = "-12345";

	printf("%d", _atoi(s));
	return (0);
}
