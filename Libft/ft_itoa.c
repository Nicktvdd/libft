/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvan-den <nvan-den@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 17:42:41 by nvan-den          #+#    #+#             */
/*   Updated: 2022/11/01 16:18:04 by nvan-den         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
// make a function to do putnbr recursively
char	*recursion(int n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		ft_putchar ('-');
		if (n <= -2147483648)
		{
			ft_putchar('2');
			n = n % -1000000000;
		}
			nb= n * -1;
	}
	if (n / 10)
	{
		ft_putnbr(n / 10);
	}
	while 
	str[j] = (n % 10 + '0');
}

char	*ft_itoa(int n)
{
	int		i;
	int		len;
	char	*str;
	int		buffer;

	i = 0;
	len = 0;
	buffer = n;
	if (buffer < 0)
	{
		n *= -1;
		len++;
	}
	while (buffer / 10)
	{
		buffer = buffer / 10;
		len++;
	}
	str = malloc(sizeof(char) * len + 1);
	if (n < 0)
		str[i++] = ('-');
	while (n / 10)
	{
		str[i] = (n % 10 + '0');
		n = n / 10;
		i++;
	}
	str[i] = (n % 10 + '0');
	i++;
	str[i] = '\0';
	return (str);
}
