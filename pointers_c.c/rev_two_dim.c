#include <stdio.h>
/**
 *
 *
 */
int row;
int col;
void print_arg(void);
void reverseArray(int [row][col]);
void swap(int *, int *);
int main(void)
{
	int i, j;

	printf("Enter row and col: ");
	scanf("%d%d", &row, &col);
	printf("Matrix arr[%d][%d]:\n", row, col);
	int arr[row][col];

	i = 0;
	do {
		j = 0;
		for (; j < col; ++j)
		{
			printf("value at position arr[%d][%d]: ", i, j);
			scanf("%d", &*(*(arr + i) + j));
		}
		i++;
	} while (i < row);
	printf("The result of matrix arr[%d][%d] is: ", row, col);
	i = 0;
	do {
		putchar(10);
		j = 0;
		while (j < col)
		{
			printf("%d", *(*(arr + i) + j));
			j++;
		}
		i++;
	} while (i < row);
	print_arg();
	reverseArray(arr);
	return (0);
}
/**
 *
 */
void print_arg()
{
	printf("\nEnter initial row and col: ");
	scanf("%d%d", &row, &col);
	printf("Reversing matrix arr[%d][%d]:---++++++++", row, col);
	int arr[row][col];

}
/**
 *
 *
 */
void reverseArray(int arr[row][col])
{
	int i, j;
	int start, end;
	/* traversing each row in arr[][]*/
	i = 0;
	while (i < row)
	{
		start = 0;
		end = col - 1;
		do {
			swap(&arr[i][start], &arr[i][end]);
			start++;
			end--;
		} while (start < end);
		++i;
	}
	for (i = 0; i < row; i++)
	{
		printf("\n");
		j = 0;
		while (j < col)
		{
			printf("%d", *(*(arr + i) + j));
			++j;
		}
	}
}
/**
 *
 *
 */
void swap(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
