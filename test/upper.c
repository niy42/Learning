#include<stdio.h>
/**
 *
 *
 */
void first_upper(char *s)
{
	int i;

	i = 0;
	do {
		if (i == 0 || s[i - 1] == ' ' 	)
		{
			if (s[i] >= 65 && s[i] <= 90)
			{
				s[i] += 32;
				continue;
				printf("%c", s[i]);
			}
		}
		else 
			if (s[i] >= 97 && s[i] <= 122)
				s[i] -= 32;
				printf("%c", s[i]);
		/*if (s[i - 1] == ' ')
		{
			if (s[i] >= 97 && s[i] <= 122)
			{	s[i] += 32;
				printf("%c", *(s + i));
			}
		}*/
		/*else
			if (s[i] >= 65 && s[i] <= 90)
				s[i] += 32;
				printf("%c", s[i]);*/
		i++;
	} while (s[i] != '\0');
	/*printf("%s", s);*/
}
int main(void)
{
	char s[] = "MAIN LOVE YOU";

	first_upper(s);
	return (0);
}
