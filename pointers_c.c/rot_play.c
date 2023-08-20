#include <stdio.h>
#include <stdbool.h>
/**
 *
 *
 */
int _isalpha(char c)
{
	int flag;

	flag = 0;
	(c <= 122 && c >= 'a' || c >= 65 && c <= 'Z') ? (flag = 1) : 0;

	return (flag);
}
bool _istrue(char c)
{
	bool flag;

	flag = false;
	(c >= 65 && c <= 77 || c >= 'a' && c <= 109) ? (flag = true) : false;

	return (flag);
}
char *rot13(char *str)
{
	char *return_str;

	return_str = str;
	do {
		if (_isalpha(*str))
			(_istrue(*str)) ? (*str += 13) : (*str -= 13);
		str++;
	} while (*str);
	return (return_str);
}
int main(void)
{
	char s[] = "ROT13 (\"rotate by 13 places\", sometimes hyphenated ROT-13) is a simple letter substitution cipher.\n";
	char *p;

	p = rot13(s);
	printf("%s", p);
	printf("------------------------------------\n");
	printf("%s", s);
	printf("------------------------------------\n");
	p = rot13(s);
	printf("%s", p);
	printf("------------------------------------\n");
	printf("%s", s);
	printf("------------------------------------\n");
	p = rot13(s);
	printf("%s", p);
	printf("------------------------------------\n");
	printf("%s", s);
	return (0);
}
