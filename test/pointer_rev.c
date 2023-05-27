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
		index++;
	} while (s[index]);
	return (index);
}
void rev(char *s)
{
	int i, j;
	char tmp, *start, *end;

	i = _strlen(s);
	start = s;
	end = s;
	i--;
	j = 0;
	for (; j < i; j++)
	{
		end++;
	}
	j = 0;
	while (j < i/2)
	{
		tmp = *end;
		*end = *start;
		*start = tmp;

		start++;
		end--;
		j++;
	}
}
void rev1(char *s)
{
	char tmp;
	int i, j;

	i = _strlen(s);
	i--;
	j = 0;
	do {
		tmp = s[j];
		s[j] = *(s + (i - j));
		s[i - j] = tmp;
		j++;
	} while (j <= i/2);
}
int main(void)
{
	char s[] = "1 2345";
	char r[20];

	printf("Enter string: ");
	gets(r);
	rev(r);
	puts(r);

	rev(s);
	puts(s);
	return (0);
}

