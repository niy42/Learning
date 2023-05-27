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
	do {
		i++;
		index += 1;
	} while (s[index]);
	return (index);
}
void rev_string(char *s)
{
	char tmp;
	int i = _strlen(s), j;

	i--;
	j = 0;
	for (; j < i; j++)
	{
		tmp = *(s + j);
		s[j] = *(s + (i - j));
		s[i - j] = tmp;
	}
}
int main(void)
{
	char s[] = "I am good";
	puts(s);
	rev_string(s);
	printf("%s", s);
	return (0);
}
