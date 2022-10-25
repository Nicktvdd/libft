#include <stdlib.h>

void    *ft_itoa(int n)
{
    int     i;
    int     len;

    i = 0;

    char    *a;

	if (n < 0)
	{
		a[i] = ('-');
		n *= -1;
        i++;
        len++;
	}

	while (n / 10)
	{
		ft_itoa(n/10);
        len++;
	}
    a = malloc(sizeof(char) * len + 1);
	a[i++] = (n % 10 + '0');
    a[i] = NULL;
}
