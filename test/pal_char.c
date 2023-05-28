#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<unistd.h>
/**
 * main _ creating random numbers
 * Return: Always zero
 */
int main(void)
{
	int i, n, num;
	time_t t;
	int num1, num2, num3;

	t = 0;
	n = 3;
	srand((unsigned)time(&t));
	/*creating three different variables*/
	printf("Using Three variables to output different outcomes\n");
	num1 = (rand() % 50) + 1;
	num2 = (rand() % 50) + 1;
	num3 = (rand() % 50) + 1;

	printf("%d\n", num1);
	printf("%d\n", num2);
	printf("%d\n", num3);

	/*using the while loop*/
	printf("One variable using the while loop to output different outcomes\n");
	i = 0;
	do {
		printf("%d\n", (rand() % 50) + 1);
		i++;
	} while (i < n);
	return (0);
}
