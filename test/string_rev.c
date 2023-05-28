/*
 * Author: Adeniyi Obanla
 * Purpose: Different ways to reverse a string
 */
#include<stdio.h>
/**
 * _strlen - counts the length of string
 * @s: characters to be reversed
 * Return: string length
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
 * rev - reverses string using pointers
 * @s: characters to be reversed
 */
void rev(char *s)
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
	while (j < i/2)
	{
		tmp = *start;
		*start = *end;
		*end = tmp;

		start++;
		j++;
		end--;
	}
}
/**
 * rev1 - reverses string without implementing predefined function in stdlib
 * @s: characters to be reversed
 */
void rev1(char *s)
{
	char tmp;
	int i, j;

	i = _strlen(s);
	i--;
	j = 0;
	for (; j < i; j++)
	{
		tmp = s[i];0
		s[i] = *(s + j);
		s[j] = tmp;
		i--;
	}
}
/** 
 * rev2 - implement reverse without predefined library function
 * @s: characters to be reversed
 */
void rev2(char *s)
{
	char tmp;
	int i, j;

	i = _strlen(s);
	i--;
	j = 0;
	do {
		tmp = *(s + (i - j));
		s[i - j] = s[j];
		s[j] = tmp;
		j++;
	} while (j <= i/2);/* i is dependent on j for movement
			      thus, we half the string*/
}
/**
 * rev3 - implement reversal without using predefined lib function
 * @s: characters to be reversed
 */
void rev3(char *s)
{
	char tmp;
	int i, j;

	i = _strlen(s);
	j = 0;
	for (; j < i/2; j++)
	{
		tmp = *(s + (i - j - 1));
		s[i - j - 1] = s[j];
		s[j] = tmp;
	}
}
/**
 * rev4 - reverses string literal stored in ROM
 * @s: characters to be reversed
 */
void rev4(char *s)
{
	int i;

	i = _strlen(s);
	i--;
	do {
		printf("%c", s[i--]);
	} while (i >= 0);
}
/**
 * main - calls other functions
 * Return: Always zero
 */
int main(void)
{
	char a[7] = "012345";
	char b[7] = "012345";
	char c[7] = "012345";
	char *s = "012345";

	rev(a);
	puts(a);

	rev1(b);
	puts(b);

	rev2(c);
	puts(c);

	printf("Enter string: ");
	gets(c);
	rev3(c);
	puts(c);

	rev4(s);
	return (0);
}
