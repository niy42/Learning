#include <stdio.h>
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
	} while (*(s + index) != '\0');
	return (index);
}
int palindrome(char s[])
{
	int i, j;
	int flag = 0;
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
	while (j <= i/2)
	{
		if (*(s + (i - j)) != s[j])
			flag = 1;
		start++;
		end--;
		j++;
	}
	if (flag)
		printf("%s is not a palindrome\n", s);
	else
		printf("%s is a palindrome\n", s);
}
int main(void)
{
	int i;
	char str[i];

	i = 15;
	printf("Enter string: ");
	scanf("%s", &str);

	palindrome(str);
	return (0);
}
