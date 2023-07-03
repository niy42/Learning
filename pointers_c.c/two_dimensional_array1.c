#include <stdio.h>
/**
 * main - creates two dimensional array
 *  ------ Takes user input
 * Return: Always zero (success)
 */
 int main(void)
 {
    int i, j;
    int row, col;
    
    printf("Declare no_row: ");
    scanf("%d", &row);
    printf("Declare no_col: ");
    scanf("%d", &col);
    printf("Matrix row[%d]col[%d]:\n", row, col);
    int arr[row][col];
    
    i = 0;
    for (; i < row; ++i)
    {
        for (j = 0; j < col;)
        {
            printf("Enter arr[%d][%d]: ", i, j);
            scanf("%d", &*(*(arr + i) + j));
            ++j;
        }
    }
    printf("The result of Matrix[%d][%d] is: ", row, col);
    i = 0;
    while (i < row)
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
    return (0);
 }
