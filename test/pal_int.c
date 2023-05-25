#include<stdio.h>
/**
 * main - determines if number is a palindrome or not
 * Return: Always zero
 */
int main(void)
{
	int num, original;
	int reminder, reverse;

	printf("Enter num: ");
	scanf("%d", &num);
	original = num;
	reverse = 0;
	do {
		reminder = num % 10;
		reverse = (reverse * 10) + reminder;
		num /= 10;
	} while (num != 0);
	if (reverse == original)
		printf("%d is a palindrome", original);
	else
		printf("%d is not a palindrome", original);
	return (0);
}

