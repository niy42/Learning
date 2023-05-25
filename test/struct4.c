#include<stdio.h>
/**
 *
 *
 */
int _strlen(char *s)
{
	int i;
	size_t index;

	i = 0;
	index = 0;
	do {
		i++;
		index++;
	} while (s[index] != '\0');
	return (index);
}
/**
 *
 *
 *
 */
char *_strcpy(char *dest, char *src)
{
	char *return_dest;

	return_dest = dest;
	if (dest == NULL)
		return (NULL);
	for (; *src != '\0';)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (return_dest);
}
/**
 *
 */
typedef struct
{
	char name[6];
	char id[7];
	int age;
	int grade[5];
}stud;
/**
 *
 *
 */
void print_student(stud student)
{
	int i, num;

	num = 5;
	printf("Name: %s\n", student.name);
	printf("ID: %s\n", student.id);
	printf("Age: %d\n", student.age);
	printf("Grade: ");
	i = 0;
	while (i < num)
	{
		printf("%d", student.grade[i]);
		if (i == num - 1)
			break;
		printf(", ");
		i++;
	}
	printf("\n");
}
/**
 *
 *
 */
int main(void)
{
	stud james;

	_strcpy(james.name, "James");
	_strcpy(james.id, "162src");
	james.age = 23;
	james.grade[0] = 23;
	james.grade[1] = 32;
	james.grade[2] = 15;
	james.grade[3] = 6;
	james.grade[4] = 48;
	print_student(james);
	return (0);
}
