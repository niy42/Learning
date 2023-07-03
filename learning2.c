#include<stdio.h>
/**
 *
 *
 */
/* *(str + 1) dereferences the second element in the array*/
/* *str or *(str) or *(str + 0) dereferences the first element in the array*/
int is_sep(char prev)
{
	char sep[] = {'\t', '\n', ' ', ',', ';', '!', '.', '?', '\"', '(', ')', '{', '}'};
	int i;

	i = 0;
	while (sep[i] != '\0')
	{
		if (prev == sep[i])
			return (1);
		i++;
	}
	return (0);
}
char *cap_string(char *str)
{
	int i;
	char *tmp;
	char prev;
	char sep = 0;

	/*tmp = str;*//* by default an array decay to a pointer or a pointer to a character array points to the first element in the array*/
	/*if (*str >=  97 && *str <= 122) *//*if the first element is a small letter ranging from a to z*/
		/**str -= 32;*//* change the first letter to a capital letter*/
	i = 0;
	do {
		if (sep == 1 && str[i] >= 97 && str[i] <= 122)
		{
			str[i] -= 32;
			sep = 1;
		}
		prev = str[i];
		sep =  is_sep(prev);
		i++;
	} while (str[i] != '\0');
	return (str);
		/*prev = *(tmp - 1);*/ /*deferences the last element in the array*/ 
		/*switch (prev)
		{
			case ',':
			case ' ':
			case '.':
			case '?':
			case '\"':
			case '\t':
			case '\n':
				*s -= 32;
				break;
		}*
		s++;
	} while (s);*/
}
int main(void)
{
	char s[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\nhello world! hello-world 0123456hello world\thello world.hello world\n";
	char *p;

	p = cap_string(s);
	printf("%s", p);
	printf("%s", s);
	return (0);
}

