#include <stdio.h>
/**
 * main - prints two dimensional array of integer elements
 * Return: Always zero main - prints two dimensional array of integer elements
 */
int main(void)
{
	int i, j;
	int row = 3, col = 3;
	int arr[row][col];

	i = 0;
	while (i < row)
	{
		j = 0;
		for (; j < col; j++)
		{
			printf("Enter number of array in position arr[%d][%d] =  ", i, j); 
			scanf("%d", &*(*(arr + i) + j));
		}
		++i;
	}
	printf("The Matrix of arr[%d][%d] is: ", i, j);
	i = 0;
	for (; i < row; ++i)
	{
		printf("\n");
		j = 0;
		do {
			printf("%d", *(*(arr + i) + j));
			++j;
		} while (j < col);
	}
	return (0);
}
