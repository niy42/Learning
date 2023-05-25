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
		index += 1;
		i++;
	} while (s[index] != '\0');
	return (index);
}
void rev_pointer(char a[])
{
	int i, j;
	char tmp, *start, *end;

	start = a;
	end = a;
	i = _strlen(a);
	i--;
	j = 0;
	for (; j < i;)
	{
		end++;
		j++;
	
	}
	j = 0;
	while (j <= i/2)
	{
		tmp = *end;
		*end = *start;
		*start = tmp;
		start++;
		j++;
		end--;
	}
	printf("%s\n", a);
}
char *_strcpy(char *dest,  char *src)
{
	size_t index;

	index = 0;
	for (; src[index] != '\0';)
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}
int main(void)
{
	char a[12];
	char *p;
	char b[] = "Hello";

	p = _strcpy(a, "Hello");
	printf("%s\n", a);
	rev_pointer(b);
	puts(b);
	return (0);
}
