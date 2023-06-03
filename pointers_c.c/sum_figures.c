/*
 * Author: Adeniyi Obanla
 * Purpose: Sum of array indexes
 */
#include <stdio.h>
#include <stdlib.h>
/**
 * main - C program to calculate the sum of figures
 * Return: Always sero (success)
 */
 int main(void)
 {
    int i, num;
    int num2;
    int *ptr;
    int sum = 0;
    
    printf("Enter array size: ");
    scanf("%d", &num);

    ptr = calloc(num, sizeof(int));/* dynamically allocating array*/
    if (ptr == NULL)
    {
        printf("Error - unable to allocate memory");
        exit(0);
    }
    i = 0;
    do {
            printf("Enter sum[%d]: ", i);
            scanf("%d", &*(ptr + i));
            sum += *(ptr + i); /*adding index values*/
            ++i;
    } while (i < num);
    printf("The sum of the %d figures is %d\n", num, sum);

    printf("Enter new size of array: ");
    scanf("%d", &num2);
    ptr = realloc(ptr, num2);/* dynamically reallocating array*/
    i = 0;
    for (; i < num2;)
    {
        printf("Enter sum[%d]: ", i + num);
        scanf("%u", &*(ptr + i));
        sum += *(ptr + i);
        i++;
    }
    printf("The new sum of all %d figures is %d", (num + num2), sum);
    free(ptr);
    return (0);
 }
