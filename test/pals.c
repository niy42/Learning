#include<stdio.h>
#include<stdbool.h>
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
		index = index + 1;
	} while (*(s + i) != '\0');
	return (index);
}
void palindrome(char *s)
{
	int i, j;
	int flag = 0;

	i = _strlen(s);
	i--;
	j = 0;
	for (; j <= i/2;)
	{
		if (*(s + (i - j)) != s[j])
			flag = 1;
		j++;
	}
	if (flag)
		printf("%s is not a palindrome\n", s);
	else
		printf("%s is a palindrome\n", s);
}
bool palindrome_1(char *s)
{
	int i, j;
	char *start, *end;

	start = s;
	end = s;
	i = _strlen(s);
	i--;
	j = 0;
	while (j < i)
	{
		end++;
		j++;
	}
	j = 0;
	for (; j <= i/2;)
	{
		if (s[j] != s[i - j])
			return false;
		start++;
		end--;
		j++;
	}
	return true;
}
int main(void)
{
	int i;
	char arr[i];

	i = 15;
	printf("Enter string: ");
	scanf("%s", arr);

	palindrome(arr);
	char *s;

	i = 15;
	printf("Enter string: ");
	scanf("%s", s);

	if (palindrome_1(s))
		printf("%s is a palindrome\n", s);
	else
		printf("%s is not a palindrome\n", s);
	return (0);
}
