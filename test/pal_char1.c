#include<stdio.h>
#include<stdbool.h>
/**
 * _strlen - counts length of string
 * @s: characters to be counted
 * Return: length of string
 */
int _strlen(char s[])
{
	int i;
	size_t index;

	i = 0;
	index = 0;
	do {
		i++;
		index += 1;
	} while (s[index] != '\0');
	return (index);
}
/**
 * palin_a - checks if string is a palindrome
 * @s: strings to be checked
 * Return: palindrome
 */
bool palin_a(char *s)
{
	int i, j;
	char *start, *end;

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
		if (*(s + (i - j)) != s[j])
			return false;
		end--;
		start++;
		j++;
	} while (j <= i/2);
	return (true);
}
/**
 * palin_b - checks if string is a palindrome
 * @b: characters to be checked
 * Return: void
 */
void palin_b(char *b)
{
	int i, j;
	int flag = 0;
	
	i = _strlen(b);
	j = 0;
	do {
		if (*(b + (i - j - 1)) != b[j])
			flag = 1;
		j++;
	} while (i <= i/2);
	if (flag)
		printf("%s is not a palindrome\n", b);
	else
		printf("%s is a palindrome\n", b);

}
/**
 * rev_string - reverses a string
 */
void rev_string(char *a)
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
	do {
		tmp = *start;
		*start = *end;
		*end = tmp;
		start++;
		end--;
		j++;
	} while(j <= i/2);
}
/**
 * main - calls other functions
 * Return: Always zero
 */
int main(void)
{
	int i;
	char s[i];

	i = 15;
	printf("Enter string: ");
	scanf("%s", s);

	if (palin_a(s))
		printf("%s is a palindrome\n", s);
	else
		printf("%s is not a palindrome\n", s);
	char b[i];

	i = 15;
	printf("Enter string: ");
	scanf("%s", b);
	palin_b(b);

	char a[i];

	i = 15;
	printf("Enter string: ");
	scanf("%s", a);
	rev_string(a);
	puts(a);
	printf("The reverse of the string %s\n", a);
	return (0);
}
