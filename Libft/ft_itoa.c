/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvan-den <nvan-den@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 17:42:41 by nvan-den          #+#    #+#             */
/*   Updated: 2022/11/02 10:56:18 by nvan-den         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_counter(int n)
{
	int	len;

	len = 0;
	while (n / 10)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		i;
	int		len;
	char	*str;

	i = 0;
	len = ft_counter(n);
	if (n < 0)
	{
		n *= -1;
		len++;
	}
	str = malloc(sizeof(char) * len + 1);
	if (n < 0)
		str[i++] = ('-');
	i = len;
	while (n / 10)
	{
		str[len] = (n % 10 + '0');
		n = n / 10;
		len--;
	}
	str[len] = (n % 10 + '0');
	str[++i] = '\0';
	return (str);
}
