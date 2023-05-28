#include <stdio.h>
#include <stdlib.h>
/**
 * 
 */
 char *cap_string(char *str)
 {
    char *return_str, tmp;
    return_str = str;
    if (*str >= 97 && *str <= 122)
        *str -= 32;
    do {
            if (*str <= 'z' && *str >= 97)
            tmp = *(str - 1);
            switch (tmp)
            {
                case '.':
                case ' ':
                case ',':
                case '!':
                case '?':
                case '-':
                case '\"':
                case '\t':
                case '\n':
                    *str -= 32;
                    break;
            }
            str++;
    } while (*str);
    return (return_str);
 }
 /**
  * 
  * 
  */
 int _strlen(char *s)
 {
    int i;
    size_t index;
     
    i = 0;
    index = 0;
    while (s[index])
    {
        index++;
        i++;
    }
    return (index);
 }
 /**
  * 
  * 
  */
 int _strlen1(char *str)
 {
    size_t index;
    index = 0;
    
    do {
            index++;
            str++;
    } while (*str);
    return (index);
 }
 /**
  * 
  * 
  */
 char *_strcpy(char *dest, char *src)
 {
    char *return_dest;
    return_dest = dest;
    if (return_dest == NULL)
    {
        printf("Error! failed to allocate memory");
        exit(0);
    }
    while (*src)
    {
        *return_dest = *src;
        return_dest++;
        src++;
    }
    return_dest = '\0';
    return (return_dest);
 }
 /**
  * 
  * 
  */
 int main(void)
 {
    char str1[] = "Wealth";
    char str2[12];
    char str3[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\nhello world! hello-world 0123456hello world\thello world.hello world\n";
    char str[] = "Greatness";
    int result = _strlen(str);
    int result1 = _strlen1(str1);
    char *p = _strcpy(str2, str1);
    char *ptr = cap_string(str3);
    
    printf("The string length of %s is %d\n", str, result);
    printf("The string length of %s is %d\n", str1, result1);
    printf("The copy of str2 is %s\n", str2);
    printf("%s", ptr);
    return (0);
 }
