#include<stdio.h>
/**
 *
 *
 */
void upper_case(char *s)
{
	int i;
	size_t index;

	i = 0;
	index = 0;
	do {
		if (s[index] >= 97 && s[index]  <= 122)
			s[index] -= 32;
		index++;
		i++;
	} while (s[index] != '\0');
}
void first_upper(char *s)
{
	int i;

	i = 0;
	do {
		if (i == 0)
		{
			if (s[i] >= 97 && s[i] <= 122)
				s[i] -= 32;
			continue;
		}
		if (s[i] == ' ')
		{
			i++;
			if (s[i] >= 97 && s[i] <= 122)
			{
				s[i] -= 32;
				continue;
			}
		}
		else  
			if (s[i] >= 65 && s[i] <= 90)
				s[i] += 32;
		i++;
	} while (s[i] != '\0');
}

int main(void)
{
	char s[5] = "john";
	char t[5] = "JOHN";

	/*s[0] = 'j';
	s[1] = 'o';
	s[2] = 'h';
	s[3] = 'n';*/
	upper_case(s);
	puts(s);
	first_upper(t);
	printf("%s\n", t);
	return (0);
}
