#include<stdio.h>
/**
 * _strlen - counts the length of a string
 * @s: characters to be counted
 *  Return: string length
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
	} while (*(s + index));
	return (index);
}
/**
 * rev_string_literal - reverses a string literal
 * @s: characters to be reversed
 */
void rev_string_literal(char *s)
{
	int i = _strlen(s);
	i--;
	for (; i >= 0;)
	{
		printf("%c", s[i--]);
	}
	putchar('\n');
}
/**
 * rev_string_array - reverses a string array
 * @s: characters to be reversed
 */
void rev_string_array(char *s)
{
	char tmp;
	int i, j = 0;
	i = _strlen(s);
	i--;
	for(; j <= i/2; j++)
	{
		tmp = *(s + j);
		s[j] = *(s + (i - j));
		s[i - j] = tmp;
	}
}
/**
 * main - calls other functions
 * Return: Always zero (success)
 */
int main(void)
{
	char r[17];
	printf("Enter string: ");
	gets(r);

	char *s = "Good Morning";

	rev_string_literal(s);
	rev_string_array(r);
	puts(r);
	return (0);
}
