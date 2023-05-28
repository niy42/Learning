#include<stdio.h>
/**
 *
 *
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	do {
		i++;
	} while (s[i]);
	return (i);
}
void rev(char *s)
{
	int j, i = _strlen(s);
	
	i--;
	j = 0;
	for (; j <= i/2; j++)
	{
		char tmp = s[j];
		s[j] = s[i - j];
		s[i - j] = tmp;
	}
}
int main(void)
{
	char r[12] = "Best";

	rev(r);
	puts(r);
	return (0);
}
