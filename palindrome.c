#include<stdio.h>
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
	} while (s[index]);
	return (index);
}
void palin(char *s)
{
	int i, j, flag = 0;

	i = _strlen(s);
	j = 0;
	do {
		(s[j] != s[i - j - 1]) ? flag = 1 : 0;
		j++;
	} while (j <= i/2);
	if (flag)
		printf("%s is not a palindrome", s);
	else
		printf("%s is a palindrome", s);

}
int main(void)
{
	int i = 10;
	char s[i];

	printf("Enter string: ");
	scanf("%s", &s);
	palin(s);
	return (0);
}
