#include<stdio.h>
/**
 *
 *
 */
char *first_letter(char *s)
{
	int i, j;

	i = 0;
	j = 1;
	while (s[i] != '\0')
	{
		if (i == 0 || (s[i - j] == ' ' || s[i - j] == ',' 
		|| s[i - j] == '?' || s[i - j] == '\"' 
		|| s[i - j] == '.' || s[i - j] == '\n' 
		||s[i - j] == '\t' || s[i - j] == '-'))
		{
			if (s[i] >= 97 && s[i] <= 122)
			{
				s[i] -= 32;
			}
		}
		else if (s[i] >= 65 && s[i] <= 90)
			s[i] += 32;
		i++;
	}
	return (s);
}
int main(void)
{
	char s[] = "Expect the best. Prepare for the worst. Capitalize on what?comes.\nhello world! hello-world 0123456hello world\thello world.hello world\n"; 
	char *p = first_letter(s);

	printf("%s\n", p);
	printf("%s\n", s);
	return (0);
}
