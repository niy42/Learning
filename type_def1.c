#include<stdio.h>
/**
 *
 *
 *
 */
typedef struct
{
	int x;
	int y;
} test;
void print_test(test arr[])
{
	int i, num;

	num = 4;
	i = 0;
	do {
		printf("arr[%d] = (%d, %d)\n", i, arr[i].x, arr[i].y);
		i++;
	} while (i < num);
}
int main(void)
{
	int num = 4;
	int i;

	test arr[num];
	i = 0;
	for (; i < num;)
	{
		arr[i].x = i;
		arr[i].y = num - i;
		i++;
	}
	print_test(arr);
	return (0);
}
