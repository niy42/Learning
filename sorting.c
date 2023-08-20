#include <stdio.h>
#include <stdlib.h>
/**
 * 
 */
 void swap(int *p, int x, int y);
 int main(void)
 {
    int i, j, max = 5;
    int arr[max];

    i = 0;
    for (; i < max; ++i)
    {
        printf("Enter value of array for position %d: ", i);
        scanf("%d", &*(arr + i));
    }
    i = 0;
    while (i < max)
    {
        j = i + 1;
        do {
                if (arr[i] > arr[j])
                    swap(arr, i, j);
                j++;
        } while (j < max);
        i++;
    }
    printf("Sorted arrays are: ");
    for (i = 0; i < max; ++i)
    {
        printf("%d", *(arr + i));
        if (i == max - 1)
            break;
        printf(", ");
    }
    return (0);
 }
 void swap(int *p, int x, int y)
 {
    int tmp = *(p + y);
    p[y] = *(p + x);
    p[x] = tmp;
 }
