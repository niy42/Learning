#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int *arr;
} tree;
void print_tree(tree x, tree y)
{
    int i;
    
    i = 0;
    for (; i < 5;)
    {
        printf("x.arr[%d] = %d\n", i, x.arr[i]);
        i++;
    }
    i = 0;
    do {
            printf("y.arr[%d] = %d\n", i, y.arr[i]);
            i++;
    } while (i < 5);
}
int main(void)
{
    tree x;
    tree y;
    
    x.arr = malloc(5);
    y.arr = calloc(5, sizeof(int));
    int i;
    i = 0;
    while (i < 5)
    {
        x.arr[i] = i;
        y.arr[i] = 5 - i;
        i++;
    }
    print_tree(x, y);
    free(x.arr);
    free(y.arr);
    return (0);
}
