#include<stdio.h>
/**
 *
 *
 *
 */
void first_letter(char *s)
{
	int i;

	i = 0;
	do {
		if(i == 0)
		{
			if (s[i] >= 97 && s[i] <= 122)
			{
				s[i] -= 32;
				printf("%c", s[i]);
			}
		}
		else if (s[i - 1] == ' ')
		{
			if (s[i] >= 65 && s[i] <= 90)
			{
				s[i] -= 32;
				printf("%c", s[i]);
			}
		}
		else
			if (s[i] >= 97 && s[i] <= 122)
				s[i] += 32;
				printf("%c", s[i]);
		i++;
	} while (s[i] != '\0');
	printf("%s", s);
}
int main(void)
{
	char s[] = "main Dance Hall";

	first_letter(s);
	return (0);
}
