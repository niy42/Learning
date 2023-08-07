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
	for(; j < i;)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;;
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
	do {
		tmp = s[i - j];
		*(s + (i - j)) = s[j];
		s[j] = tmp;
		j++;
	} while (j <= i / 2);
}
void rev3(char *s)
{
	int i = _strlen(s);

	i--;
	while (i >= 0)
	{
		printf("%c", s[i--]);
	}
}
void rev4(char *s)
{
	char tmp, *start, *end;
	int i, j;

	i = _strlen(s);
	start = s;
	end = s;
	i--;
	for (j = 0; j < i; j++)
	{
		end++;
	}
	j = 0;
	do {
		tmp = *start;
		*start = *end;
		*end = tmp;
		start++;
		end--;
		j++;
	} while (j <= i/2);
}

int main(void)
{
	char r[] = "12345";
	char s[] = "12345";
	char *t = "12345";
	char a[] = "12345";

	rev(r);
	printf("%s\n", r);
	rev1(s);
	puts(s);
	rev3(t);
	putchar('\n');
	rev4(a);
	puts(a);
	return (0);
}
