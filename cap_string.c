#include <stdio.h>
/**
 * 
 */
 char *cap_string(char *str)
 {
    char *tmp;
    char last;
    
    tmp = str;
    if (*str >= 65 && *str <= 90)
        *str += 32;
    do {
            if (*str >= 97 && *str <= 122) /*condition check is done first*/
            	last = *(str - 1); /*condition*/
            	switch (last) /* condition is compared with multiple cases*/
           	{
               		case ',':
                	case '.':
               		case '!':
               		case '?':
                	case '\"':
                	case '\n':
                	case '\t':
                	case ' ':
                	case '(':
                	case ')':
                    		*str -= 32;
                    		break;
            	}
           str++;
    } while (*str != '\0');
    return (tmp);
 }
 char *encode(char *str)
 {
     char *tmp;
     
     tmp = str;
    while (*str)
    {
        (*str == 'E' || *str == 'e') ? *str = '2' : '0';
        (*str == 'W' || *str == 'w') ? *str = '3' : '0';
	if (*str == 't' || *str == 'T')
		*str = '1';
        (*str == 'd') ? *str = '4' : '0';
        str++;
    }
    return (tmp);
 }
 int main(void)
 {
     char str[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\nhello world! hello-world 0123456hello world\thello world.hello world\n";
     
     printf("%s\n", cap_string(str));
     printf("%s\n", encode(str));
     return (0);
 }
