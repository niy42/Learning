#include<stdio.h>
#include<string.h>
/**
 *
 *
 */
void rev(char *s)
{
	char tmp;
	int i, j;
	i = strlen(s) - 1;
	
	j = 0;
	while (j < i)
	{
		tmp = s[j];
		s[j] = s[i - j];
		s[i - j] = tmp;
		j++;
		i--;
	}
}
int main(void)
{
	char s[] = "Breakfast";

	rev(s);
	puts(s);
	return (0);
}
