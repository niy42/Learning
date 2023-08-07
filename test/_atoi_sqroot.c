#include <stdio.h>
/**
 * _sqr_recursive - a utility function to find the square root of a num
 * @n: number of the square root we are finding 
 * @low: base case (value changes if condition not satisfied)
 * @high: highest case (value changes if condition not satisfied)
 * Return: square root of the number
 */
 int _sqr_recursive(int n, int low, int high)
 {
     if (low > high)/*list is exhausted and sqr_root not wthin range)*/
     {
         return (-1);
     }
     else
     {
         int mid = low + (high - low) / 2;
         int sqr = (long long)mid * mid;
         
         if (sqr == n)
         {
             return mid;
         }
         else if (sqr > n)
         {
             return _sqr_recursive(n, low, mid - 1);
         }
         else
         {
             return _sqr_recursive(n, mid + 1, high);
         }
     }
 }
 /**
  * _sqr_recursion - calls the utility function
  * @num: number to be passed as argument
  *  Return: square root
  */
 int _sqr_recursion(int num)
 {
     if (num < 0)
     {
         return (-1);
     }
     else
     {
         return _sqr_recursion(num, 0, num);
     }
 }
 /**
  * _atoi - converts ascii to its integer value
  *  @str: string to be passed as argument
  *  Return: integer value
  */
 int _atoi(char str[])
 {
     int i = 0;
     signed int sign = 1;
     unsigned num = 0;
     int res;
     
     if (i == 0)/*particular about the first index*/
     {
         if (str[i] == '-')
         {
             sign *= -1;
         }
     }
     while (str[i])
     {
         if (*(str + i) < '0'|| str[i] > '9')/*checks if not integer*/
         {
             ++i;/*move to next char if not an integer*/
         }
         num *= 10;
         num += str[i] - '0';
         ++i;
     }
     res = sign * num;
     return (res);
 }
 /**
  *  main - calls function atoi and _sqr_recursion
  *  Return: zero(success)
  */
 int main(void)
 {
     char str[] = "-112345";
     int res, star;
     int result;
     
     res = _atoi(str);
     printf("ASCII to integer of -112345 is %d\n", res);
     
     printf("Enter a number: ");
     scanf("%d", &star);
     res = _sqr_recursive(star);
     if (res != -1)/*if res not (-1), execute the code inside*/
     {
         printf("The square root of %d is %d\n", star, res);
     }
     else
     {
         printf("%d does not have a natural square root\n", star);
     }
     return (0);
 }
