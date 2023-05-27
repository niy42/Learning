/*
 * Author: Adeniyi Obanla
 * Title: Doing Hard things
 * Purpose: Learning C
 */
#include <stdio.h>
#include <stdlib.h>
/**
 * _strcpy - copies string from source to destination
 * @src: source of string
 * @dest: destinaton of string
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	char *return_dest;
	return_dest = dest;
	if (return_dest == NULL)
		fprintf(stderr, "Error - unable to allocate required memory\n");
	while (*src)
	{
		*return_dest = *src;
		return_dest++; 
		src++;
	}
	return_dest = '\0';
	return(return_dest);
}
/**
 * an alias and user defined data type.
 */
typedef struct
{
	int *arr;
} tree;
/**
 * print_tree - prints a data structure
 * @x: first argument
 * @y: second argument
 */
void print_tree(tree x, tree y)
{
	int i, num = 3;

	i = 0;
	do {
		printf("x.arr[%d] = %d\n", i, x.arr[i]);
		i++;
	} while (i < num);
	i = 0;
	for (; i < num; i++)
	{
		printf("y.arr[%d] = %d\n", i, y.arr[i]);
	}
}
/**
 * _strlen - counts length of the string using a pointer
 * @str: characters to be counted
 * Return: string length
 */
int _strlen(char *str)
{
	size_t index;

	index = 0;
	for (; *str;)
	{
		index++;
		str++;
	}
	return (index);
}
/**
 * palindrome - compares string and its reverse for oneness using pointers
 * str: argument to be passed
 */
void palindrome(char str[])
{
	int i, j;
	int flag = 0;
	char *start, *end;

	start = str;
	end = str;
	i = _strlen(str);
	i--;
	j = 0;
	for (; j < i;)
	{
		end++;
		j++;
	}
	j = 0;
	while (j <= i/2)
	{
		if (*start != *end)
			flag = 1;
		start++;
		end--;
		j++;
	}
	if (flag)
		printf("%s is not a palindrome\n", str);
	else
		printf("%s is a palindrome\n", str);
}
/**
 * rev - reverse a string using pointers
 * @str: characters to be reversed
 */
void rev(char *str)
{
	int i, j;
	char tmp, *start, *end;

	start = str;
	end = str;
	i = _strlen(str);
	i--;
	j = 0;
	for (; j < i;)
	{
		end++;
		j++;
	}
	j = 0;
	do {
		tmp = *start;
		*start = *end;
		*end = tmp;
		start++;
		end--;
		j++;
	} while (j <= i/2);
	printf("The reverse of the string is :%s\n", str);
}
typedef struct
{
	char *name;/*dynamic allocation from the heap*/
	char id[7];/*static allocation from the stack*/
	int age;
	int *grade;
} stud;
/**
 * print_james - prints record of james
 */
void print_james(stud student)
{
	int i, num = 3;
	if (student.name == NULL)
		fprintf(stderr, "Error - unable to allocate requested memory\n");
	printf("Name: %s\n", student.name);
	printf("ID: %s\n", student.id);
	if (student.grade == NULL)
	{
		printf("Error! memory not allocated");
		exit(0);
	}
	printf("Grade: ");
	for (i = 0; i < num; i++)
	{
		printf("%d", student.grade[i]);
		if (i == num - 1)
			break;
		printf(", ");
	}
	putchar(10);
	printf("Age: %d\n", student.age);
}
/**
 * main - calls other functions
 *
 * Return: Always zero (success)
 */
int main(void)
{
	char s[] = "Playstations";
	char s1[] = "cool";
	char str[] = "radar";
	int i, num = 3;

	int res = _strlen(s);

	printf("The length of %s is: %d\n", s, res);
	palindrome(s);
	rev(s);
	palindrome(s1);
	palindrome(str);
	tree x;
	tree y;
	x.arr = malloc(num);
	y.arr = calloc(num, sizeof(int));
	i = 0;
	do {
		x.arr[i] = i + 2;
		y.arr[i] = num * i;
		i++;
	} while (i < num);
	print_tree(x, y);
	free(x.arr);
	free(y.arr);

	stud james;
	james.name = calloc(7, sizeof(char));
	_strcpy(james.name, "James");
	_strcpy(james.id, "001234");
	james.grade = malloc(3);
	i = 0;
	for (; i < 3;)
	{
		james.grade[i] = i;
		++i;
	}
	james.age = 28;
	print_james(james);
	free(james.name);
	free(james.grade);
	return (0);
}
