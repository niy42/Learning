#include<stdio.h>
/**
 *
 */
typedef struct
{
	int x;
	int y;
} points;
void print_arr(points *arr);
int main(void)
{
	points p1 = {2, 3};
	printf("p1.x: %d\n", p1.x);
	printf("p1.y: %d\n", p1.y);

	points p2 =
	{
		.x = 20,
		.y = 30
	};
	printf("p2.x = %d\n", p2.x);
	printf("p2.y = %d\n", p2.y);

	int i, num;
	num = 5;
	points arr[num];
	for (i = 0; i < num; i++)
	{
		arr[i].x = i;
		arr[i].y = num - i;
	}
	print_arr(arr);
	return (0);
}
void print_arr(points *arr)
{
	int i, num = 5;

	i = 0;
	for (; i < num;)
	{
		printf("arr[%d] = (%d, %d)\n", i, arr[i].x, arr[i].y);
		i++;
	}
}
