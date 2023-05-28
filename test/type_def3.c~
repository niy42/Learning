#include<stdio.h>
#include<stdlib.h>
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
	} while (*src != '\0');
	*return_dest = '\0';
	return (return_dest);
}
struct point
{
	char name[7];
	char id[7];
	int age;
	int grade[5];
};
typedef struct
{
	int x;
	int y;
	int *arr;
}points;
void print_james(struct point james)
{
	int i, num;

	i = 0;
	num = 5;
	printf("Name: %s\n", james.name);
	printf("Age: %d\n", james.age);
	printf("ID: %s\n", james.id);
	printf("Grade: ");
	while (i < num)
	{
		printf("%d", james.grade[i]);
		if (i == num - 1)
			break;
		printf(", ");
		i++;
	}
	putchar('\n');
}
void print_test(points t)
{
	int i, num;

	i = 0;
	for (; i < num;)
	{
		printf("arr[%d] = %d\n",i, t.arr[i]);
			i++;
	}
}
int main(void)
{
	struct point james;
	_strcpy(james.name, "James");
	_strcpy(james.id, "001234");
	james.grade[0] = 1;
	james.grade[1] = 2;
	james.grade[2] = 3;
	james.grade[3] = 4;
	james.grade[4] = 5;
	james.age = 30;
	print_james(james);

	points p1 =
	{
		.x = 20,
		.y = 30
	};
	printf("p1.x: %d\n", p1.x);
	printf("p1.y: %d\n", p1.y);

	points test;
	test.arr = malloc(5);
	/*test.arr[0] = 1;
	test.arr[1] = 2;
	test.arr[2] = 3;
	test.arr[3] = 4;
	test.arr[4] = 5;*/
	int i, num;
	test.arr[num];
	i = 0;
	num = 5;
	while (i <= num - 1)
	{
		test.arr[i] = i;
		i++;
	}
	print_test(test);

	return (0);
}	
