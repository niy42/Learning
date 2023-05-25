// Online C compiler to run C program online
#include <stdio.h>
/**
 * 
 * 
 */
 int _strlen(char *str)
 {
    int i;
    int index;
    
    i = 0;
    index = 0;
    while (*(str + index))
    {
     	index += 1;
        i++;
    }
    return (index);
 }
 char *_strcpy(char *dest, char *src)
 {
    char *tmp;
    tmp = dest;
    if (tmp == NULL)
    {
        fprintf(stderr, "Error - unable to allocate required memory\n");
    }
    do {
            *dest = *src;
            dest++;
            src++;
    } while (*src);
    *dest = '\0';
    return (tmp);
 }
 char *cap_string(char *str)
 {
    int i, j, len;
    char *tmp;
    
    tmp = str;
    len = _strlen(str);
    len -= 3;
    i = 0;
    j = 0;
    while (j < len)
    {
        if (str[i] >= 97 && str[i] <= 122)
            str[i] -= 32;
        j++;
        i++;
    }
    return (tmp);
 }
 char *_capstring(char *str)
 {
    char last;
    int i, j;
    
    last;
    i = 0;
    j = 1;
    do {
            last = str[i - j];
            if (i == 0)
            {
                if(str[i] >= 97 && str[i] <= 122)
                    str[i] -= 32;
            }
            else if (last)
                if (str[i] >= 97 && str[i] <= 122)
                    switch (last)
                    {
                        case ',':
                        case '?':
                        case ';':
                        case '(':
                        case ')':
                        case ' ':
                        case '-':
                        case '.':
                        case '\n':
                        case '\t':
                            str[i] -= 32;
                            break;
                    }
            i++;
    } while (str[i]);
    return (str);
 }
 int main(void)
 {
    char str[15];
    char *s;
    char p[] = "Hello world";
    char test[] = "expect the best. Prepare for the worst. Capitalize on what comes.\nhello world! hello-world 0123456hello world\thello world.hello world\n";
     
    s = _strcpy(str, "Hello World");
    printf("s: %s\n", s);
    printf("str: %s\n", str);
    
    printf("p: %s\n", cap_string(p));
    printf("test: %s\n", _capstring(test));
    return (0);
 }
