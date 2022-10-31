#include <stdlib.h>

int	ft_atoi(char *str)
{
	int i;
	int	res;
	int min;

	i = 0;
	res = 0;
	min = 1;
	while (str[i] == ' ') //and other empty spaces)
	{
		i++;
	}
	if (str[i] == '-')
	{
		if (str == -2147483648)
			res = 2;
		min = -1;
		i++;
	}
	if (str[i] == '+' || str[i] == '-')
		return (0);
	while (str[i])
	{
		res = (res * 10) + (str[i] - '0');
		i++;
	}
	return ((res / 10) * min);

}
