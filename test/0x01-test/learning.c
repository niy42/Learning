#include<stdio.h>
#include<stdlib.h>
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
	while (s[index] != '\0')
	{
		index++;
		i++;
	}
	return (index);
}
void rev(char *s)
{
	int i, j;
	char tmp, *start, *end;

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
		tmp = *end;
		*end = *start;
		*start = tmp;
		start++;
		end--;
		j++;
	} while (j <= i/2);
	printf("%s\n", s);
}
bool palindrome(char *a)
{
	int i, j;
	char *start, *end;

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
		if (a[j] != *(a + (i - j)))
			return false;
		start++;
		end--;
		j++;
	} while (j <= i/2);
	return (true);
}
char *_strcpy(char *dest, char *src)
{
	char *return_dest;
	return_dest = dest;
	if (dest == NULL)
		fprintf(stderr, "Error - unable to allocate required memory\n");
	do {
		*return_dest = *src;
		return_dest++;
		src++;
	} while (*src != '\0');
	*return_dest = '\0';
	return (return_dest);
}
int _atoi(char s[])
{
	int i;
	signed int sign = 1;
	unsigned int num = 0;

	i = 0;
	do {
		if (i == 0)
		{
			if (s[i] == '-')
			{
				sign *= -1;
			}
		}	
		else if (s[i] >= '0' && s[i] <= '9')
			num = num * 10 + (s[i] - '0');
		i++;
	} while (s[i] != '\0');
	return (num * sign);
}
int main (void)
{
	char d[] = "string";
	int i;
	char arr[i];

	rev(d);
	i = 15;
	printf("Enter string: ");
	scanf("%s", arr);

	if (palindrome(arr))
		printf("%s is a palindrome\n", arr);
	else
		printf("%s is not a palindrome\n", arr);
	char m[12];

	_strcpy(m, "Hello");
	puts(m);
	char b[15] = "-12345 -34568";

	printf("%d\n", _atoi(b));
	return (0);
}
