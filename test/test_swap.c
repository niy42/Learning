#include<stdlib.h>
#include<stdio.h>
/**
 * 
 *
 *
 */
int main(void)
{
	unsigned int i, n;
	int tmp;
	int arr[i];/*array declaration*/
/* or I can dynamically allocate an array using pointer*/
	printf("Enter the number of array: ");
	scanf("%d", &n);
	
	printf("Enter each array element: ");
	i = 0;
	do {
		scanf("%d", &arr[i]);
		i++;
	} while (i < n);

	printf("array before swapping: ");
	for (i = 0; i < n;)
	{
		printf("%d", arr[i]);
		if (i != n - 1)
		{
			putchar(',');
			putchar(' ');
		}
 		i++;
	}
	putchar('\n');

	tmp = arr[n - 1];
	*(arr + (n - 1)) = arr[0];
	*(arr + 0) = tmp;

	printf("array after swapping: ");
	i = 0;
	while (i < n)
	{
		printf("%d", *(arr + i));
		if (i == n - 1)
			break;
		putchar(',');
		putchar(' ');
		i++;
	}
	/*free(p);*/
	return (0);
}
