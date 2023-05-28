#include<stdbool.h>
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
		i++;
		index += 1;
	} while (s[index] != '\0');
	return (index);
}
bool _palindrome(char *s)
{
	int i, j;

	i = _strlen(s);
	j = 0;
	while (j <= i/2)
	{
		if (s[j] != *(s + (i - j - 1)))
			return false;
		j++;
	}
	return (true);
}
int main(void)
{
	int i;
	char s[i];

	i = 20;
	printf("Enter string: ");
	scanf("%s", s);

	if (_palindrome(s))
		printf("%s is a palindrome", s);
	else
		printf("%s is not a palindrome", s);
	return (0);
}
