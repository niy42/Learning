#include<stdio.h>
#include<string.h>
/**
 *
 *
 */
typedef struct
{
	char name[10];
	char ID[5];
	int age;
	int grade[3];
}Student;
int main(void)
{
	int i;
	Student james;

	strcpy(james.name, "James");
	printf("Name: %s\n", james.name);
	strcpy(james.ID, "ads0147");
	printf("ID: %s\n", james.ID);
	james.age = 26;
	printf("Age: %d\n", james.age);
	james.grade[0] = 1;
	james.grade[1] = 2;
	james.grade[2] = 3;
	printf("Grade: ");
	i = 0;
	do {
		printf("%d", james.grade[i]);
		i++;
	} while (i < 3);
	printf("\n");
	return (0);
}
