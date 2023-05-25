#include<stdio.h>
#include<stdlib.h>
/**
 *
 *
 */
int main(void)
{
	int i;
	int *arr;
	int num;

	printf("Enter num of arrays: ");
	scanf("%d", &num);

	arr = malloc(num);
	printf("Enter array elements: ");
	i = 0;
	while (i < num)
	{
		scanf("%d", &arr[i]);
		i++;
	}
	printf("Array elements are: ");
	i = 0;
	do {
		printf("%d", arr[i]);
		if (i == num - 1)
			break;
		putchar(',');
		putchar(' ');
		i++;
	} while (i < num);
	free(arr);
	return (0);
}
