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
	while (s[index] != '\0')
	{
		index += 1;
		i++;
	}
	return (index);
}
void *_strcpy(char *dest, char *src)
{
	if (dest == NULL)
		return NULL;
	char *a;
	a = dest;
	for (; *src != '\0';)
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (a);
}
typedef struct
{
	char name[8];
	char id[10];
	int age;
	int grade[5];
} stud;
void print_stud(stud student)
{
	int i, num;

	num = 5;
	printf("Name: %s\n", student.name);
	printf("ID: %s\n", student.id);
	printf("Grade: ");
	i = 0;
	do {
		printf("%d", student.grade[i]);
		if (i == num - 1)
			break;
		printf(", ");
		i++;
	} while (i < num);
	putchar('\n');
	printf("Age: %d\n", student.age);
}
typedef struct
{
	int x;
	int y;
} point;
void print_points(point *points)
{
	for (int i = 0; i < 10; i++)
	{
		printf("p%d = (%d, %d)\n", i, points[i].x, points[i].y);
	}
}
void first_upper(char s[])
{
	int i;
	char *a;

	a = s;
	i = 0;
	do {
		if (i == 0 || a[i - 1] == ' ')
		{
			if (a[i] >= 97 && a[i] <= 122)
			{
				a[i] -= 32;
			}
		}
		else
			if (a[i] >= 65 && a[i] <= 90)
				a[i] += 32;
		i++;
	} while (a[i] != 0);
	printf("%s\n", a);
}
int main(void)
{
	stud francis;
	_strcpy(francis.name, "Francis");
	_strcpy(francis.id, "00494brt");
	francis.age = 25;
	francis.grade[0] = 19;
	francis.grade[1] = 23;
	francis.grade[2] = 16;
	francis.grade[3] = 45;
	francis.grade[4] = 67;
	print_stud(francis);
	char s[] = "fIRST tIME hERE";

	first_upper(s);

	point p1 = {10, 25};
	point p2 = 
	{
		.y = 8, 
		.x = 4
	};
	p1 = p2;
	point points[10];
	int i;

	i = 0;
	for (; i < 10; i++)
	{
		points[i].x = i;
		points[i].y = 10 - i;
	}
	print_points(points);
	printf("p1.x: %d\n", p1.x);
	printf("p1.y: %d\n", p1.y);
	
	printf("p2.x: %d\n", p2.x);
	printf("p2.y: %d\n", p2.y); 
return (0);
}
