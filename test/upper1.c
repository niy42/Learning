#include<stdio.h>
/**
 * first_letter - capitalises the first letter if a word
 * @s: argument to be passed an converted
 */
void first_letter(char *s)
{
	int i;

	i = 0;
	do {
		if (i == 0 || s[i - 1] == ' ')
		{
			if (s[i] >= 97 && s[i] <= 122)
			{
				s[i] -= 32;
			}
		}
		else
			if (s[i] >= 65 && s[i] <= 90)
				*(s + i) += 32;
		i++;
	} while (s[i] != '\0');
	printf("%s\n", s);
}
/**
 * all_caps - converts lower to uppercase letters
 * @s: characters to be converted
 */
void all_caps(char *s)
{
	int i;

	i = 0;
	do {
		if (s[i] >= 97 && s[i] <= 122)
			s[i] -= 32;
		i++;
	} while (s[i] != '\0');
	printf("%s\n", s);
}
/**
 * main - entry point and calls first_letter prototype
 * Return - Always zero
 */
int main(void)
{
	char s[] = "fIRST tIME hERE";
	char s1[] = "first time here";

	first_letter(s);
	all_caps(s1);
	return (0);
}
