/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvan-den <nvan-den@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 10:57:53 by nvan-den          #+#    #+#             */
/*   Updated: 2022/11/01 15:19:04 by nvan-den         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_atoi(char *str)
{
	int		i;
	long	res;
	int		min;

	i = 0;
	res = 0;
	min = 1;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\v' || str[i] == '\t'
		|| str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '-')
	{
		min = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	if (str[i] == '+' || str[i] == '-')
		return (0);
	while (str[i] >= '0' && str[i] <= '9')
		res = (res * 10) + (str[i++] - '0');
	return ((int)res * min);
}
