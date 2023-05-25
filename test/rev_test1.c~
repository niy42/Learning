#include<stdio.h>
#include<stdlib.h>
/**
 * _strlen - counts the length of the string
 * @s: characters to be counted
 * Return: length of the string
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
/**
 * rev - reverses a string array
 * @s: characters to be reversed
 */
void rev(char *s)
{
	char tmp;
	int i, j;

	i = _strlen(s);
	i--;
	j = 0;
	while (j < i)
	{
		tmp = s[i];
		s[i] = *(s + j);
		s[j] = tmp;
		i--;
		j++;
	}
}
/**
 * rev1 - reverses a string array
 * @s: charcters to be reversed
 */
void rev1(char *s)
{
	char tmp;
	int i, j;

	i = _strlen(s);
	i--;
	j = 0;
	for (; j < i/2;)
	{
		tmp = *(s + (i - j));
		s[i - j] = s[j];
		*(s + j) = tmp;
		j++;
	}
}
/**
 * main - calls other functions
 * Return: Always zero (success)
 */
/**
 *
 *
 */
char *_strncpy(char *dest, char *src, int n)
{
	int src_length = _strlen(src);
	int size = src_length;
	dest = calloc(size, sizeof(char));
	int i;

	i = 0;
	do {
		dest[i] = src[i];
		i++;
	} while (i < size && i < n);
	return (dest);
}
int main(void)
{
	char r[12] = "sgnisselb";
	char s[12] = "sgnisselb";
	char t[12];
	char a[] = "Goodman";
	char *p = _strncpy(t, a, 4);

	rev(r);
	puts(r);
	rev1(s);
	puts(s);
	puts(p);
	return (0);
}
