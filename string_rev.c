#include<stdio.h>
/**
 *
 *
 */
int _strlen(char *s)
{
	int i;
	int index;

	i = 0;
	index = 0;
	do {
		i++;
		index += 1;
	} while (s[index]);
	return (index);
}
void rev_pointer(char *s)
{
	char tmp, *start, *end;
	int i, j;

	start = s;
	end = s;
	i = _strlen(s);
	i--;
	j = 0;
	for (; j < i;)
	{
		end++;
		j++;
	}
	j = 0;
	do {
		tmp = *start;
		*start = *end;
		*end = tmp;
		start++;
		end--;
		j++;
	} while (j < i/2);
}
void rev(char *s)
{
	char tmp;
	int i, j;

	i = _strlen(s);
	i--;
	j = 0;
	while (j <= i/2)
	{
		tmp = s[i - j];
		s[i - j] = s[j];
		s[j] = tmp;

		j++;
	}
}
void rev_a(char *s)
{
	char tmp;
	int i, j;

	i = _strlen(s);
	j = 0;
	for (j; j < i/2;)
	{
		tmp = s[i - j - 1];
		s[i - j - 1] = s[j];
		s[j] = tmp;
		j++;
	}
}
void rev_b(char *s)
{
	char tmp;
	int i, j;

	i = _strlen(s);
	i--;
	j = 0;
	for (; j < i; j++)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
		i--;
	}
}
void rev_c(char *s)
{
	int i;

	i = _strlen(s);
	i--;
	while (i >= 0)
	{
		printf("%c", s[i--]);
	}
}
int main(void)
{
	char p[] = "12345";
	char a[] = "12345";
	char b[] = "12345";
	char c[] = "12345";
	char r[] = "12345";

	rev_pointer(p);
	puts(p);
	rev(a);
	printf("%s\n", a);
	rev_a(b);
	puts(b);
	rev_b(c);
	printf("%s\n", c);
	rev_c(r);
	return (0);
}
