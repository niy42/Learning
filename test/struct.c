#include<stdio.h>
#include<string.h>
/**
 *
 *
 */

typedef struct
{
	char name[25];
	char id[15];
	int age;
	int grade[5];
}Student;
void print_student(Student student)
{
	int i;

	printf("Name: %s\n", student.name);
	printf("ID: %s\n", student.id);
	printf("age: %d\n", student.age);
	printf("Grade: ");

	i = 0;
	for (; i < 5;)
	{
		printf("%d", student.grade[i]);
		i++;
	}
	printf("\n");
}
int main(void)
{
	Student Kelvin;
	int i;

	strcpy(Kelvin.name, "Kelvin");
	strcpy(Kelvin.id, "id004562");
	Kelvin.age = 23;
	Kelvin.grade[0] = 0;
	Kelvin.grade[1] = 1;
	Kelvin.grade[2] = 2;
	Kelvin.grade[3] = 3;
	Kelvin.grade[4] = 4;
	/*printf("Name: %s\n", Kelvin.name);
	printf("ID: %s\n", Kelvin.id);
	printf("Age: %d\n", Kelvin.age);
	printf("Grade: ");
	i = 0;
	do {
		printf("%d", Kelvin.grade[i]);
		i++;
	} while (i < 5);*/
	print_student(Kelvin);

	return (0);
}
