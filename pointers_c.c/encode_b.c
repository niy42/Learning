#include <stdio.h>
/**
 * _ischar - checks for letter a - z or A - Z
 *  @c: characters to be checked
 *  Return: 1 if found or else return 0
 */
int _ischar(char c)
{
    int flag;
     
    flag = 0;
    (c >= 65 && c <= 90 || c <= 122 && c >= 97) ? flag = 1 : 0;
     
    return (flag);
}
/**
  * _istrue - checks for letter a - m or A - M
  *  @c: Letter to be checked
  *  Return: 1 if found or else 0
  */
int _istrue(char c)
{
    int flag;
      
    flag = 0;
    switch (c >= 'a' && c <= 109 || c <= 77 && c >= 65)
    {
        case 0:
                flag = 0;/* if case is not found it is false*/
                break;
        case 1:
                flag = 1; /* if case is found it is true*/
                break;
    }
    return (flag);
}
char *encode_B(char *str)
{
    char *return_str;
        
    return_str = str;
    do {
            if (_ischar(*str))
                if (_istrue(*str))/*if it's true for a - m or A - M*/
                    *str += 13;
                else if(!(_istrue(*str)))/*if it's not true for a - m or A - M*/
                    *str -= 13;
            str++;
        } while (*str);
    return (return_str);
  }
  /**
   * main - calls encode_B function
   * Return: ALWays zero for success
   */
  int main(void)
  {
    char s[] = "ROT13 (\"rotate by 13 places\", sometimes hyphenated ROT-13) is a simple letter substitution cipher.\n";
	char *p;

	p = encode_B(s);
	printf("%s", p);
	printf("------------------------------------\n");
	printf("%s", s);
	printf("------------------------------------\n");
	p = encode_B(s);
	printf("%s", p);
	printf("------------------------------------\n");
	printf("%s", s);
	printf("------------------------------------\n");
	p = encode_B(s);
	printf("%s", p);
	printf("------------------------------------\n");
	printf("%s", s);
	return (0);
  }
