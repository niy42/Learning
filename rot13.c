#include <stdio.h>
/**
 * _ischar - returns if letter 
 * @str:  characters to check
 * Return: 1 if letter is found, else 0
 */
 int _ischar(char str)
 {
    int flag;
     
    flag = 0;
    (str >= 65 && str <= 'z' || str <= 'Z' && str >= 97) ? flag = 1 : 0;
    
    return (flag);
 }
/**
 * _istrue - returns if letter ranges from capital(A && M) or small(a && m)
 * @c: characters to check
 * Return: 1 if condtion is true, else return 0
 */
 int _istrue(char c)
 {
    int flag;
     
    flag = 0;
    (c >= 'a' && c <= 109 || c <= 77 && c >= 'A') ? flag = 1 : 0;
    
    return (flag);
 }
 /**
  * rot13 - encodes the string
  * @str: characters to check
  * Return: encoded string
  */
 char *rot13(char *str)
 {
    char *return_str;
     
    return_str = str;
    do {
            if (_ischar(*str))
                if (_istrue(*str)) 
                    *str += 13;
                else if (!(*str >= 'a' && *str <= 109 || *str <= 65 && *str >= 77))
                    *str -= 13;
            str++;
    } while (*str);
    return (return_str);
 }
/**
 * main - calls other functions
 * Return: Always zero (succes)
 */
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
