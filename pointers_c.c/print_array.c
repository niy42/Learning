#include <stdio.h>
/**
 * main - prints an array of numbers
 * Return - Always zero
 */
 void display(int *p, int i);
 void dis_play(int *p);
 int main(void)
 {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int i; 
    
    display(&arr[i], i);
    dis_play(arr);
    return (0);
 }
 void display(int *p, int i)
 {
    for (i = 0; i < 10; ++i)
    {
        printf("%d", *(p + i));
        if (i == 10 - 1)
            break;
        printf(", ");
    }
     printf("\n");
 }
 void dis_play(int *p)
 {
    int i;
    
    i = 0;
    while (i < 10)
    {
        printf("%d", *(p + i));
        if (i != 9)
        {
            putchar(',');
            putchar(' ');
        }
        ++i;
    }
 }
