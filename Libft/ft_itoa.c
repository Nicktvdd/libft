/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvan-den <nvan-den@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 17:42:41 by nvan-den          #+#    #+#             */
/*   Updated: 2022/11/01 15:59:14 by nvan-den         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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
		n = n / 10;
		str[i] = (n % 10 + '0');
		i++;
	}
	str[i] = '\0';
	return (str);
}
