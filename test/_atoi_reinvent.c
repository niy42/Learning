/*
 * Author: Obanla Adeniyi
 * Purpose: Re-invent userdefined atoi
 */
#include <stdio.h>
#include <stdlib.h>
/**
 * _atoi - userdefined atoi
 * Return: integer form of Ascii Value
 */
int _atoi(char s[])
{
	int i = 0;
	signed int sign = 1;
	unsigned int num = 0;

	if (i == 0)
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}
	}
	do {
	        if (s[i] >= '0' && s[i] <= '9')
			{
			    num *= 10;
			    num += s[i] - '0';
			}
		    i++;
	} while (s[i] != '\0');
	return (num * sign);
}
/**
 * main - calls other function
 * Return: Always zero(success)
 */
int main(void)
{
    char *str = "-123456789";
    int res = _atoi(str);
    
    printf("%d", res);
    return(0);
}
