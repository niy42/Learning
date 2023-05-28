#include<stdio.h>
#include<string.h>
/**
 * _strcpy - compares two strings using pointers 
 * @str1 - first string
 * @str2 - second string
 */
 void _strcmp(char *str1, char *str2)
 {
    int flag = 0;
     
    do {
            if (*str1 != *str2)
            {
                flag = 1;
                break;
            }
            str1++;
            str2++;
    } while (*str1 && *str2);
    if (flag)
        printf("The strings are not the same\n");
    else
        printf("The strings are the same\n");
 }
 int main(void)
 {
    char str1[15];
    char str2[15];
    char str3[15];
    char str4[15];
    int value;
    
    printf("Enter first string: ");
    scanf("%s", &str1);/* address of the entire array*/
    printf("Enter second string: ");
    scanf("%s", &str2);/*address of the entire array*/
    value = strcmp(str1, str2);
    if (value == 0)
        printf("The strings are the same\n");
    else
        printf("The strings are not the same\n");
    printf("Enter first string: ");
    scanf("%s", &str3);/* address of the entire array*/
    printf("Enter second string: ");
    scanf("%s", &str4);/*address of the entire array*/
    _strcmp(str3, str4);
    return (0);
 }
 
