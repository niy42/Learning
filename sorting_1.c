/**
 * Author: Adeniyi Obanla
 * Purpose: C program to sort an array of numbers.
 */
#include <stdio.h>
/**
 * swap - arranges indexes in ascending order
 * @p: array to be passed as argument
 * @x: index position to be swapped
 * @y: index position to be swapped
 */
 void swap(int *p, int x, int y)
 {
   
    int tmp;
    
    tmp = *(p + x);
    *(p + x) = p[y];
    p[y] = tmp;
 }
/**
 * main - calls other functions
 * Return: Always zero for success
 */
 int main(void)
 {
    int max = 5, arr[max];
    int i, j;
    
    for (i = 0; i < max; i++)
    {
        printf("Enter the number in array position %d: ", i);
        scanf("%d", &*(arr + i));
    }
    i = 0;
    do {
            j = i + 1;
            while (j < max)
            {
                if (arr[j] < arr[i])
                    swap(arr, i, j);
                j++;
            }
            ++i;
    } while (i < max);
    i = 0;
    printf("Array after sorting is: ");
    for (; i < max;)
    {
        printf("%d", *(arr + i));
        if (i == max - 1)
            break;
        printf(", ");
        ++i;
    }
    return (0);
 }
