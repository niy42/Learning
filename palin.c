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
	} while (s[index]);
	return (index);
}
int main(void)
{
	char s[32];
	int i, j;
	int flag = 0;

	printf("Enter string: ");
	scanf("%s", s);

	i = _strlen(s);
	i--;
	j = 0;
	do {
		if (s[j] != s[i - j])
			flag = 1;
			break;
			j++;
	} while (j <= i/2);
	if (flag)
		printf("%s is not a palindrome", s);
	else
		printf("%s is a palindrome", s);
	return (0);
}
