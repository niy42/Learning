#include<stdio.h>
/**
 *
 */
void first_letter(char *s)
{
	int i;

	i = 0;
	do {
		if (i == 0 || s[i - 1] == ' ')
		{
			if (s[i] >= 'a' && s[i] <= 'z')
			{
				s[i] -= 32;
			}
		}
		else if (s[i] >= 65 && s[i] <= 90)
			s[i] += 32;
		i++;
	} while (s[i] != '\0');
	printf("%s\n", s);
}
/**
 * _strcpy - looping each elements in the array
 * works for a string literal assigned to a character array
 */
char *_strcpy(char *dest, char *src)
{
	char *return_dest;
	return_dest = dest;
	if (return_dest == NULL)
		fprintf(stderr, "Error - unable to allocate required memory\n");
	for (; *src != '\0';)
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (return_dest);
}
/**
 * _strcpy - copying the entire string
 *  works for string literal assigned to a pointer to a char
 */
char *_strcpy1(char *dest, char *src)
{
	dest = src;
	return (dest);
}
int main(void)
{
	char str[] = "fAST aS pOSSIBLE";
	int *a, num;
	char *s, *b;
	
	num = 5;
	a = &num;
	printf("%d\n", num);
	b = "song";
	s = b;
	printf("b copied into s, now s is %s\n", b);

	char string[7];/* character array*/
	_strcpy(string, "Best");
	puts(string);

	char *string2;
	printf("%s\n", _strcpy1(string2, "Bless"));
	printf("%s\n", string2);/*gibberish*/

	first_letter(str);
}
