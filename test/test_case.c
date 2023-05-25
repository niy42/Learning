#include<stdio.h>
/**
 *
 *
 */
char *first_case(char *s)
{
	size_t index;
	int i;

	i = 0;
	index = 0;
	do {
		if (index == 0 || s[index] == ' ')
		{
			if (s[index] >= 97 && s[index] <= 122)
			{
				s[index] -= 32;
			}
		}
		else
			if (s[index] >= 65 && s[index] <= 90)
				s[index] += 32;
		index += 1;
		i++;
	} while (s[index] != '\0');
	/*printf("%s\n", s);*/
	return (s);
}
int main(void)
{
	char s[] = "fIRST tIME hERE";

	printf("%s\n", first_case(s));
	return (0);
}
