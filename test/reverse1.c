#include<stdio.h>
/**
 *
 *
 *
 */
int _strlen(char *s)
{
	int i;
	size_t index;

	i = 0;
	index = 0;
	do {
		i++;
		index++;
	} while (s[index]);
	return (index);
}
void rev(char *s)
{
	char tmp;
	int i, j;
	
	i = _strlen(s);
	i--;
	j = 0;
	while (j < i)
	{
		tmp = s[j];
		s[j] = s[i];
		s[i] = tmp;
		j++;
		i--;
	}
}
void rev1(char *s)
{
	char tmp;
	int i, j;

	i = _strlen(s);
	i--;
	j = 0;
	for (; j <= i/2; j++)
	{
		tmp = s[i - j];
		s[i - j] = s[j];
		s[j] = tmp;
	}
}
void rev2(char *s)
{
	int i = _strlen(s);

	i--;
	for (; i >= 0;)
	{
		printf("%c", s[i--]);
	}
}
int main(void)
{
	char *r = "Breakfast";
	char s[20] = "Breakfast";
	char t[10] = "Breakfast";

	rev(s);
	puts(s);

	rev1(t);
	printf("%s\n", t);

	rev2(r);
	putchar('\n');
	puts(r);
	return (0);
}
