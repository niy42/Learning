#include <stdio.h>
/**
 * 
 */
 void print3(int num)
 {
     if (num > 0)
     {
        int i, j;
        
        i = 1;
        while (i <= num)
        {
            for (j = 1; j <= num - i; j++)
            {
                putchar(' ');
            }
            j = 1;
            do {
                    putchar('*');
                    ++j;
            } while (j <= i);
            ++i;
            putchar(10);
        }
     }
 }
 int main(void)
 {
    print3(4);
    return (0);
 }
