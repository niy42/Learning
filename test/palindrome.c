#include<stdio.h>
#include<stdbool.h>
/**
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
	i--;
	j = 0;
	for (; j <= i;)
	{
		if (s[j] != s[i])
			return false;
		j++;
		i--;
	}
	return (true);
}
void _palindrome1(char *s)
{
	int i, j, flag = 0;
	char *start, *end;

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
	do {
		if (*start != *end)
			flag = 1;
		start++;
		end--;
		j++;
	} while (j <= i/2);
	if (flag)
		printf("%s is not a palindrome\n", s);
	else
		printf("%s is a palindrome\n", s);
}
bool _palindrome2(char *s)
{
	int i, j;

	i = _strlen(s);
	j = 0;
	while (j <= i/2)
	{
		if (s[j] != s[i - j - 1])
			return false;
		j++;
	}
	return (true);
}
void _palindrome3(char s[])
{
	int i, j;
	int flag;

	flag = 0;
	i = _strlen(s);
	i--;
	j = 0;
	for (; j <= i/2;)
	{	
		if (s[j] != s[i - j])
			flag = 1;
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
	char s[i];

	i = 20;
	printf("Enter string: ");
	scanf("%s", s);

	if (_palindrome(s))
		printf("%s is a palindrome\n", s);
	else
		printf("%s is not a palindrome\n", s);
	char st[i];

	i = 20;
	printf("Enter string: ");
	scanf("%s", st);
	if (_palindrome2(st))
		printf("%s is a palindrome\n", st);
	else
		printf("%s is not a palindrome\n", st);
	char res[i];

	i = 20;
	printf("Enter string: ");
	scanf("%s", res);
	_palindrome1(res);
	char tes[i];

	i = 20;
	printf("Enter string: ");
	scanf("%s", tes);
	_palindrome3(tes);
	return (0);
}
