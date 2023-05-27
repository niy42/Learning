#include<stdio.h>
/**
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
		index += 1;
	} while (s[index]);
	return (index);
}
void rev1(char *s)
{
	int i, j;
	char tmp;

	i = _strlen(s);
	j = 0;
	while (j < i/2)
	{
		tmp = s[i - j - 1];
		*(s + (i - j - 1)) = s[j];
		*(s + j) = tmp;
		j++;
	}
}
int main(void)
{
	char s[] = "12345";

	rev1(s);
	puts(s);
	return (0);
}
