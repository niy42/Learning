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
	do {
		tmp = s[i];
		*(s + i) = *(s + j);
		s[j] = tmp;
		i--;
		j++;
	} while (j < i);
}
void rev1(char *s)
{
	char tmp;
	int i, j;
	i = _strlen(s);
	i--;
	j = 0;
	for (; j  <= i / 2;)
	{
		tmp = s[i - j];
		*(s + (i - j)) = s[j];
		*(s + j) = tmp;
		j++;
	}
}
int main(void)
{
	char s[] = "riahc";
	char t[] = "riahc";

	rev(s);
	puts(s);

	rev1(t);
	puts(t);
	return (0);
}
