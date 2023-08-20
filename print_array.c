#include <stdio.h>
/**
 * 
 * 
 */
 int main(void)
 {
     int num, i;
     
     
     printf("Enter size of array: ");
     scanf("%d", &num);
     int arr[num];/*declare array after reading value into num*/
     
     printf("Enter num into respective indexes: ");
     i = 0;
     while (i < num)
     {
        scanf("%d", &arr[i]);
        ++i;
     }
     printf("Array: ");
     i = 0;
     while (i < num)
     {
         printf("%d", *(arr + i));
         if (i == num - 1)
             break;
         printf(", ");
         ++i;
     }
     return (0);
 }
