#include<stdio.h>
/**
 *
 *
 */
void rev_array(char *s)
{
	size_t i, j;
	char tmp;

	i = 0;
	do {
		i++;
	} while (s[i] != '\0');
	i--;
	for (j = 0; j <= i / 2; j++)
	{
		tmp = s[j];
		s[j] = s[i - j];
		s[i - j] = tmp;
	}
}
void rev_string(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	while (i >= 0)
	{
		printf("%c", s[i]);
		i--;
	}
}
int main(void)
{
	char s[] = "Name";
	char *r = "Name";

	puts(s);
	rev_array(s);
	printf("%s\n", s);
	rev_string(r);
	return (0);
}
