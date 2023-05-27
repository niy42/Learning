#include<stdio.h>
#include<stdlib.h>
/**
 * 
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
char *_strncpy(char *dest, char *src, int n)
{
	int src_length = _strlen(src);
	int size = src_length + 1;
	dest = (char*)calloc(size, sizeof(char));
	int i = 0;

	do {
		dest[i] = *(src + i);
		i++;

	} while (i < size && i < n);
	dest[size - 1] = '\0';
	return (dest);
}
int main(void)
{
	char r[15];
	char s[] = "Good Morning";
	int n = 6;
	char *p = _strncpy(r, s, n);

	printf("%s\n", p);
	printf("%p\n", &r);
	free(p);
	return (0);
}
