#include <stdio.h>
/**
 * 
 * 
 */
 int row;
 int col;
 void display_arg();
 void swap(int *, int *);
 void revNode(int arr[row][col]);
 int main(void)
 {
     int i, j;
     printf("Enter row and col: ");
     scanf("%d%d", &row, &col);
     int arr[row][col];
     printf("Matrix - arr[%d][%d]:\n", row, col);
     
     i = 0;
     do {
            j = 0;
            while (j < col)
            {
                printf("Enter value at arr[%d][%d]: ", i, j);
                scanf("%d", *(arr + i) + j);
                ++j;
            }
            i++;
     } while (i < row);
     printf("Matrix - arr[%d][%d] is:", row, col);
     i = 0;
     for(; i < row; ++i)
     {
         putchar(10);
         j = 0;
         while (j < col)
         {
             printf("%d", *(*(arr + i) + j));
             ++j;
         }
     }
     display_arg();
     revNode(arr);
     return (0);
 }
 void display_arg()
 {
     printf("\nAbout to reverse the matrix\nEnter row and col: ");
     scanf("%d%d", &row, &col);
     int arr[row][col];
     printf("Reversing the matrix:....\n");
 }
 void swap(int *p, int *r)
 {
     int tmp;
     tmp = *p;
     *p = *r;
     *r = tmp;
 }
 void revNode(int arr[row][col])
 {
     int start, end, i, j;
     
     i = 0;
     for (; i < row; ++i)
     {
         start = 0;
         end = col - 1;
         while (start < end)
         {
             swap(&arr[i][start], &arr[i][end]);
             ++start;
             end--;
         }
     }
     printf("Reversing the matrix: ");
     i = 0;
     for (; i < row;)
     {
         putchar(10);
         j = 0;
         while (j < col)
         {
             printf("%d", *(*(arr + i) + j));
             j++;
         }
         i++;
     }
 }
