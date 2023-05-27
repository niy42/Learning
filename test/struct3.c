#include<stdio.h>
#include<stdlib.h>
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
		index++;
		i++;
	} while (s[index] != '\0');
	return (index);
}
char *_strcpy(char *dest, char *src)
{
	int src_len = _strlen(src);
	int i, size;

	size = src_len;
	dest = calloc(size, sizeof(char));
	i = 0;
	while (i < size)
	{
		dest[i]  = src[i];
		i++;
	}
	dest[size] = '\0';
	return (dest);
}
char *_strcpy1(char *dest, const char *src)
{
	int i;
	size_t index;

	if (dest == NULL)
		return NULL;
	i = 0;
	index = 0;
	do {
		dest[index] = src[index];
		index++;
		i++;
	} while (src[index] != '\0');
	dest[index] = '\0';
	return (dest);
}
char *_strcpy3(char *dest, const char *src)
{
	if (dest == NULL)
		return NULL;
	char *return_ptr = dest;
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (return_ptr);
}
int main(void)
{
	char a[12];
	char b[12];
	char c[12];
	char s1[] = "Alive";
	char s2[] = "Amen";
	char s3[] = "Best";
	char *r;
	char *s;
	char *t;

	r = _strcpy(a, s1);
	printf("%s\n", r);
	printf("%s\n\n", a);

	s = _strcpy1(b, s2);
	printf("%s\n", s);
	puts(b);
	putchar('\n');

	t = _strcpy3(c, s3);
	printf("%s\n", t);
	printf("%s\n",c);
	free(r);
	return (0);
}
