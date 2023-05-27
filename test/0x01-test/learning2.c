#include<stdio.h>
#include<stdlib.h>
/**
 *
 */
typedef struct
{
	int *arr;
} times;
void print_arr(times x, times y)
{
	int i, num;
	
	x = y;
	num = 4;
	i = 0;
	for (; i < num;)
	{
		printf("x.arr[%d] = %d\n", i, x.arr[i]);
		i++;
	}
	printf("\n");
	x.arr[0] = 12;
	i = 0;
	do {
		printf("y.arr[%d] = %d\n", i, y.arr[i]);
		i++;
	} while (i < num);
}
int _atoi(char *s)
{
	char *a;
	signed int sign = 1;
	unsigned int num = 0;

	a = s;
	while (*a != '\0')
	{
		if (*a == '-')
		{
			sign *= -1;
		}
		else if (*a >= '0' &&  *a <= '9')
		{
			num *= 10;
			num += *a - '0';
		}
		a++;
	}

	return (sign*num);
}
int main(void)
{
	int num;

	num = 4;
	times x;
	times y;
	
	x.arr = calloc(num, sizeof(int));
	y.arr = calloc(num, sizeof(int));
	x.arr[0] = 1;
	x.arr[1] = 2;
	x.arr[2] = 3;
	x.arr[3] = 4;
	y.arr[0] = 7;
	y.arr[1] = 7;
	y.arr[2] = 7;
	y.arr[3] = 7;

	print_arr(x,y);
	free(x.arr); 
	free(y.arr);

	char *s = "-12345";
	int nums = _atoi(s);

	printf("%d\n", nums);
	return (0);
}
