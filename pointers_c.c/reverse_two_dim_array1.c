/**
 *
 *
 */
#include <stdio.h>
/**
 * swap - swapping elements in each column 
 * 
 */
 int row;
 int col;
 void swap(int *a, int *b)
 {
    int tmp;
     
    tmp = *a;
    *a = *b;
    *b = tmp;
 }
 void print_arg(void)
 {
    printf("\nEnter initial row and col: ");
    scanf("%d%d", &row, &col);
    int arr[row][col];
    printf("\nReversing matrix arr[%d][%d] loading -------", row, col);
 }
 void reverseArray(int arr[row][col])
 {
    int i, j;
    int start, end;
    /*Traversing each row of arr[][]*/
    i = 0;
    for (; i < row;)
    {
        /* initialise start and end index for col*/
        start = 0;
        end = col - 1;
        while (start < end)
        {
            swap(&arr[i][start], 
            &arr[i][end]);
            
            start++;
            end--;
        }
        ++i;
    }
    i = 0;
    while (i < row)
    {
        putchar(10);
        j = 0;
        while (j < col)
        {
            printf("%d", *(*(arr + i) + j));
            ++j;
        }
        i++;
    }
 }
 int main(void)
 {
    int i, j;
    printf("Enter row and col: ");
    scanf("%d%d", &row, &col);
    printf("Matrix[%d][%d]\n", row, col);
    int arr[row][col];
    
    i = 0;
    do {
            j = 0;
            while (j < col)
            {
                printf("value at position arr[%d][%d]: ", i, j);
                scanf("%d", &*(*(arr + i) + j));
                ++j;
            }
            i++;
    } while (i < row);
    printf("Matrix arr[%d][%d] is:", row, col);
    for (i = 0; i < row; ++i)
    {
        putchar(10);
        int j = 0;
        for (; j < col;)
        {
            printf("%d", *(*(arr + i) + j));
            j++;
        }
    }
    print_arg();
    reverseArray(arr);
    return (0);
 }
