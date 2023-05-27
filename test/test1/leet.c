#include<stdio.h>
/**
 *
 *
 */
char *leet(char *s)
{
	char *temp;
	temp = s;
	do {
		(*s == 'a' || *s == 'A') ? *s = '4' : '0';
		(*s == 'e' || *s == 'E') ? *s = '3' : '0';
		(*s == 'o' || *s == 'O') ? *s = '0' : '0';
		if (*s == 't' || *s == 'T')
			*s = '7';
		if (*s == 'l' || *s == 'L')
			*s = '1';
		s++;
	} while (*s != '\0');
	return (temp);
}
int main(void)
{
	char s[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\n";
	char *p;

	p = leet(s);
	printf("%s", p);
	printf("%s", s);
	return (0);
}
