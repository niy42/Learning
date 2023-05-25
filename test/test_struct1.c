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
		index += 1;
		i++;
	} while (*(s + index) != '\0');
	return (index);
}
char *_strcpy(char *dest, char *src)
{
	char *a;
	
	a = dest;
	if (dest == NULL)
		return NULL;
	for (; *src != '\0';)
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
	char name[7];
	char id[7];
	int age;
	int grade[4];
} stud;
void print_stud(stud student)
{
	int i, num;

	num = 4;
	printf("Name: %s\n", student.name);
	printf("ID: %s\n", student.id);
	printf("Grade: ");
	i = 0;
	while (i < num)
	{
		printf("%d", student.grade[i]);
		if (i != num - 1)
		{
			printf(", ");
		}
		i++;
	}
	putchar('\n');
	printf("Age: %d\n", student.age);
}
int main(void)
{
	stud thomas;

	_strcpy(thomas.name, "Thomas");
	_strcpy(thomas.id, "001abc");
	thomas.age = 20;
	thomas.grade[0] = 23;
	thomas.grade[1] = 52;
	thomas.grade[2] = 17;
	thomas.grade[3] = 28;
	print_stud(thomas);
	return (0);
}
