#include <stdio.h>
#include <stdbool.h>
/**
 * _isalpha - checks if character is an alphabet in any case 
 *  @c: characters to be checked
 * Return: 1, true if element is found or else 0
 */
 int _isalpha(char c)
 {
    int flag;
    
    flag = 0;
    (c <= 122 && c >= 'a' || c >= 'A' && c <= 90) ? (flag = 1) : 0;
    
    return (flag);
}
 /**
  *  _istrue - checks if character is alpahabet in any case from a - m
  *  @c: characters to be checked
  * Return: true if character is found or else return 0
  */
 bool _istrue(char c)
 {
    bool flag;
     
    flag = false;
    (c <= 109 && c >= 'a' || c >= 'A' && c <= 77) ? (flag = true) : false;
    
    return (flag);
 }
 /**
  * rot13 - encodes alpahbets in any case with += 13 or -= 13
  * @str: characters to be encoded
  * Return: encoded characters
  */
 char *rot13(char *str)
 {
    char *return_str;
    return_str = str;
    do {
            if (_isalpha(*str))
                (_istrue(*str)) ? (*str += 13) : (*str -= 13);
            str++;
    } while (*str);
    return(return_str);
 }
 /**
  *  main - calls rot13 function
  *  Return: Always zero (success)
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
