#include<stdio.h>
#include<stdbool.h>
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
	char arr[i];

	i = 15;
	printf("Enter string: ");
	scanf("%s", arr);
	
	if (_palindrome(arr))
		printf("%s is a palindrome", arr);
	else
		printf("%s is not a palindrome", arr);
	return (0);
}
