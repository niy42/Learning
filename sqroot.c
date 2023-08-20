#include <stdio.h>
/**
 * 
 * 
 */
 int _sqr_recursive(int n, int low, int high)
 {
	/*if low > high, the square root is not within reach*/
     if (low <= high)
     {
         int mid = low + (high - low) / 2;
         int square = (long long) mid * mid;
         
         if (square == n)
         {
             return mid;
         }
         else if (square < n)
         {
             return _sqr_recursive(n, mid + 1, high);
         }
         else
         {
             return _sqr_recursive(n, low, mid - 1);
         }
     }
     else
     {
         return (-1);
     }
 }
 int _sqr_recursion(int num)
 {
     if (num < 0)
     {
         return (-1);
     }
     else
     {
         return _sqr_recursive(num, 0, num);
     }
 }
 int main(void)
 {
     signed num, res;
     
     printf("Enter a number: ");
     scanf("%d", &num);
     
     res = _sqr_recursion(num);
     printf("The square root of %d is %d", num, res);
     return (0);
 }
