#include <stdio.h>
#define xtra 7
/**
 * 
 * 
 */
 void rev_array(int *arr);
 void print_invalid()
 {
     printf("Invalid selection..");
 }
 void print_array(int arr[], int n, char x)
 {
     switch (x)
     {
         case 'a':
                printf("Testing array count: ");
                break;
         default:
                printf("Invalid: ");
     }
     if (n < 1)
     {
         return print_invalid();
     }
     int i;
     i = 0;
     for (; i < n; ++i)
     {
         printf("%d", *(arr + i));
         if (i == n - 1)
            break;
         printf(", ");
     }
 }
 int main(void)
 {
     int arr[7];
     int i = 0;
     
     while (i < 7)
     {
         *(arr + i) = i * 2;
         ++i;
     }
     print_array(arr, 7, 'a');
     putchar(10);
     rev_array(arr);
     print_array(arr, 7, 'a');
     return (0);
 }
 void rev_array(int *arr)
 {
     int tmp, i;
     
     i = 0;
     while (i < xtra / 2)
     {
         tmp = *(arr + i);
         arr[i] = *(arr + (xtra - i - 1));
         arr[xtra - i - 1] = tmp;
         ++i;
     }
 }
