#include <stdio.h>
/**
 * _atoi - converting ascii digit value to its integer value 
 * 
 */
 int _atoi(char str[])
 {
     int i = 0;
     signed sign = 1;
     unsigned num = 0;
     int res;
     
     if (i == 0)/*particular about the char being the first position*/
     {
         if (str[i] == '-')
         {
             sign *= -1;
         }
     }
     do {
            if (str[i] < '0' || str[i] > '9')
            {
                ++i;
            }
            num *= 10;
            num += *(str + i) - '0';
            ++i;
     } while (*(str + i));
     res = (sign * num);
     return (res);
 }
 int main(void)
 {
     char *str = "-34u5y6r92";
     int res = _atoi(str);
     
     printf("%d", res);
     return (0);
 }
