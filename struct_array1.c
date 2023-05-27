 #include <stdio.h>
 #include <stdlib.h>
/**
 * 
 * 
 */
char *_strcpy(char *dest, char *src)
{
    char *return_dest;
    
    return_dest = dest;
    if (return_dest == NULL)
        fprintf(stderr, "Error - unable to allocate required memory\n");
    do {
            *return_dest = *src;
            return_dest++;
            src++;
    } while (*src);
    *return_dest == '\0';
    return(dest);
}
typedef struct
{
    int *arr;
} tree;
void print_arr(tree x, tree y)
{
    int i, num = 5;
    
    i = 0;
    for (; i < num;)
    {
        printf("x.arr[%d]= %d\n", i, x.arr[i]);
        i++;
    }
    for (i = 0; i < num; i++)
    {
        printf("y.arr[%d]= %d\n", i, y.arr[i]);
    }
}
typedef struct
{
    char name[8];
    char id[8];
    int age;
    int grade[4];
} list;
void print_james(list anyname)
{
    int i, num = 4;
    
    printf("Name: %s\n", anyname.name);
    printf("Age: %d\n", anyname.age);
    printf("Grade: ");
    i = 0;
    do {
            printf("%d", anyname.grade[i]);
            if (i == num - 1)
                break;
            putchar(44);
            putchar(32);
            i++;
    } while (i < num);
    printf("\n");
    printf("ID: %s\n", anyname.id);
}
int main(void)
{
    list james;
    int i, num;
    
    num = 4;
    _strcpy(james.name, "James");
    _strcpy(james.id, "0012345");
    i = 0;
    while (i < num)
    {
        james.grade[i] = i + 1;
        i++;
    }
    james.age = 30;
    print_james(james);
    
    tree x;
    tree y;
    x.arr = malloc(5);
    y.arr = calloc(5, sizeof(int));
    i = 0;
    while (i < 5)
    {
        x.arr[i] = i;
        y.arr[i] = 5 - i;
        i++;
    }
    print_arr(x, y);
    
    free(x.arr);
    free(y.arr);
    return (0);
}
