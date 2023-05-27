#include<stdio.h>
#include<stdlib.h>
/**
 *
 *
 */
char *_strcpy(char *dest, char *src)
{
	char *s;

	s = dest;
	if (dest == NULL)
		fprintf(stderr, "Error - unable to allocate required memory\n");
	do {
		*dest = *src;
		dest++;
		src++;
	} while (*src != '\0');
	*dest = '\0';
	return (s);
}
/**
 *
 *
 *
 */
char *_strcat(char *dest, char *src)
{
	char *str;

	str = dest;
	if (dest == NULL)
		fprintf(stderr, "Error - unable to all\
				ocate required memory\n");
	for (; *dest != '\0'; dest++)
		;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (str);
}
/**
 *
 *
 */
int main(void)
{
	char name[5];
	char *des;

	_strcpy(name, "Niyi");

	des = calloc(10, sizeof(char));
	_strcpy(des, "A DEvop engineer");

	des = realloc(des, 15 * sizeof(char));
	_strcat(des, ". World's best");

	printf("Name: %s\n", name);
	printf("Description: %s\n", des);
`ZZZ
	free(des);
	return (0);
}
