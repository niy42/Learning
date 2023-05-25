#include<stdio.h>
/**
 * _strlen - counts string length
 * @s: characters to be counted
 * return: string length
 */
int _strlen(char s[])
{
	int i;
	size_t index;

	i = 0;
	index = 0;
	do {
		i++;
		index += 1;
	} while (s[index] != '\0');
	return(index);
}
/**
 * rev_string - reverses a string
 * @s: characters to be reversed
 */
void rev_string(char s[])
{
	 int i, j;
	 char tmp, *end;

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
		tmp = s[j];
		s[j] = *end;
		*end = tmp;
		end--;
		j++;
	 } while (j <= i/2);
	 printf("%s\n", s);
}
/**
 * first_letter - Capitalizes the first letter of each string
 * @s: argument to be passed
 */
void first_letter(char *s)
{
	int i;
	size_t index;

	i = 0;
	index = 0;
	do {
		if (index == 0 || s[index - 1] != '\0')
		{
			if (s[index] >= 97 && s[index] <= 122)
			{
				s[index] -= 32;
			}
		}
		else
			if (s[index] >= 65 && s[index] <= 90)
				s[index] += 32;
		index++;
		i++;
	} while (s[index] != '\0');
	printf("%s\n", s);
}
/**
 * main - calls other functions
 * Return: Always zero
 */
int main(void)
{
	char a[] = "Best";
	char s[] = "fIRST tIME hERE";

	puts(a);
	rev_string(a);
	first_letter(s);
	return (0);
}
