#include<stdio.h>
#include<stdlib.h>
/**
 *
 *
 */
int _strlen(char s[])
{
	int i;
	size_t index;

	i = 0;
	index = 0;
	do {
		index += 1;
		i++;
	} while (s[index] != '\0');
	return (index);
}
char *_strcpy(char *dest, char *src)
{
	if (dest == NULL)
		return NULL;
	char *return_dest = dest;

	for (; *src != '\0';)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (return_dest);
}
typedef struct
{
	int Age;
	int Grade[3];
	char Name[10];
	char ID[9];
}stud;
void print_student(stud student)
{
	printf("Name: %s\n", student.Name);
	printf("ID: %s\n", student.ID);
	printf("Age: %d\n", student.Age);
	for (int i = 0; i < 3; i++)
	{
		printf("Grade: %d\n", student.Grade[i]);
	}
}
int main(void)
{
	stud james;

	_strcpy(james.Name, "James");
	_strcpy(james.ID, "001234AS");
	james.Age = 13;
	james.Grade[0] = 0;
	james.Grade[1] = 1;
	james.Grade[2] = 2;
	print_student(james);
	return (0);
}	
