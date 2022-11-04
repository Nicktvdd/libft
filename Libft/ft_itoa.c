/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvan-den <nvan-den@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 17:42:41 by nvan-den          #+#    #+#             */
/*   Updated: 2022/11/04 12:46:14 by nvan-den         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_counter(int n)
{
	int	len;

	len = 0;
	while (n / 10)
	{
		n = n / 10;
		len++;
	}
	len++;
	return (len);
}

static char *ft_positive(int n, int len, char *str)
{
		while (--len >= 0)
	{
		str[len] = (n % 10 + '0');
		n = n / 10;
	}
	return (str);
}

static char *ft_negative(int n, int len, char *str)
{
		while (--len > 0)
	{
		str[len] = (n % 10 + '0');
		n = n / 10;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	int		i;
	int		len;
	char	*str;

	len = ft_counter(n);
	i = len;
	if (n < 0)
	{
		len++;
	}
	if ((str = malloc(sizeof(char) * (len + 1))) == NULL)
		return (NULL);
	if (n < 0)
	{
		str[0] = ('-');
		n *= -1;
		i++;
		ft_negative(n, len, str);
	}
	else
		ft_positive(n, len, str);
	str[i] = '\0';
	return (str);
}
