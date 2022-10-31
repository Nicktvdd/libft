/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvan-den <nvan-den@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 17:42:41 by nvan-den          #+#    #+#             */
/*   Updated: 2022/10/31 11:23:50 by nvan-den         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_itoa(int n)
{
	int		i;
	int		len;
	char	*a;

	i = 0;
	if (n < 0)
	{
		a[i] = ('-');
		n *= -1;
		i++;
		len++;
	}
	while (n / 10)
	{
		ft_itoa(n / 10);
		len++;
	}
	a = malloc(sizeof(char) * len + 1);
	a[i++] = (n % 10 + '0');
	a[i] = NULL;
}
