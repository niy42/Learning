#include <stdio.h>
/**
 *
 *
 */
char *cap_string(char *s)
{
	char *tmp;
	char last;
	char third;

	tmp = s;
	if (*s >= 'a' && *s <= 'z')
		*s -= 32;
	s += 2;
		/*third = *(s + 2);
		if (third)*/
			*s -= 32;
	do {
		if (*s >= 'a' && *s <= 'z')
			last = *(s - 1);
			switch (last)
			{
				case ';':
				case '.':
				case ' ':
				case '!':
				case '?':
				case '\"':
				case '\n':
				case '\t':
					*s -= 32;
					break;
			}
		s++;
	} while (*s);
	return (tmp);
}
int main(void)
{
	char s[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\nhello world! hello-world 0123456hello world\thello world.hello world\n";
	char *p;

	p = cap_string(s);
	printf("%s", p);
	printf("%s", s);
	return (0);
}
