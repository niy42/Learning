// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
/**
 * 
 * 
 */
 char *_strcpy(char *dest, char *src)
{
    char *a;
     
    a = dest;
    if (dest == NULL)
        fprintf(stderr, "Error - unable to allocate required memory\n");
    while (*src != '\0')
    {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
    return (a);
}
 typedef struct
{
     int *array;
} data;
typedef struct
{
    char name[6];
    char id[7];
    int age;
    int grade[4];
} test;
void print_test(test prototype)
{
    int num, i;
    
    num = 4;
    printf("Name: %s\n", prototype.name);
    printf("ID: %s\n", prototype.id);
    printf("Age: %d\n", prototype.age);
    printf("Grade: ");
    i = 0;
    do {
            printf("%d", prototype.grade[i]);
            if (i == num - 1)
                break;
            printf(", ");
            i++;
    } while (i < num);
    putchar('\n');
}
int main(void)
{
    test paul;
    _strcpy(paul.name, "Paul");
    _strcpy(paul.id, "001234");
    paul.age = 12;
    paul.grade[0] = 1;
    paul.grade[1] = 2;
    paul.grade[2] = 3;
    paul.grade[3] = 4;
    print_test(paul);
    putchar('\n');
    /*printf("\n");*/
    data x;
    x.array = malloc (5 * sizeof(int));
    data y;
    y.array = malloc (5 * sizeof(int));
    x = y;
    
    x.array[0] = 11;
    x.array[1] = 12;
    x.array[2] = 13;
    x.array[3] = 14;
    x.array[4] = 15;
    
    y.array[0] = 10;
    y.array[1] = 10;
    y.array[2] = 10;
    y.array[3] = 10;
    y.array[4] = 10;
    int i;
    i = 0;
    for (; i < 5; i++)
    {
        printf("x.array[%d] = %d\n", i, x.array[i]);
    }
    x.array[0] = 9;
    printf("\n");
    i = 0;
    for (; i < 5;)
    {
        printf("y.array[%d] = %d\n", i, y.array[i]);
        i++;
    }
    return (0);
}
