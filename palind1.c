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
	int i, j, len;
	char *start, *end;

	start = s;
	end = s;
	len = _strlen(s);
	len--;
	j = 0;
	for (; j < len;)
	{
		end++;
		j++;
	}
	i = 0;
	do {
		if ( start[i] != *end)
			return true;
		end--;
		i++;
	} while (i <= len/2);
	return (false);
}
int main(void)
{
	int i;
	char arr[i];

	i = 20;
	printf("Enter a string: ");
	scanf("%s", arr);

	if (palin(arr))
		printf("%s is not a palindrome\n", arr); /* if by default TRUE*/
	else						/* else*/
		printf("%s is a palindrome\n", arr); /*by default FALSE*/
	return (0);
}
