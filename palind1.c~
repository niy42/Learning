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
		index++;
	} while (*(s + index) != '\0');
	return (index);
}
bool palin(char *s)
{
	int i, j;
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
			return false;
		start++;
		end--;
		j++;
	} while (j <= i/2);
	return (true);
}
int main(void)
{
	int i;
	char arr[i];

	i = 20;
	printf("Enter a string: ");
	scanf("%s", arr);

	if (palin(arr))
		printf("%s is a palindrome\n", arr);
	else
		printf("%s is not a palindrome\n", arr);
	return (0);
}
