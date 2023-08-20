#include <stdio.h>
/***
 *
 *
 */
void print(int nb)
{
    if (nb < 0)
    {
        return;
    }
    else
    {
        --nb;
        print(nb - 1);
        printf("%d", nb);
    }
}
int main(void)
{
	print(5);
	return(0);
}
