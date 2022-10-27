/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvan-den <nvan-den@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 18:53:08 by nvan-den          #+#    #+#             */
/*   Updated: 2022/10/27 12:20:06 by nvan-den         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t		i;
	size_t		j;
	char		*d;

	i = 0;
	while (1)
	{	
		j = 0;
		while (str[i] != to_find[j])
		{
			if (str[i] == '\0' || to_find[j] == '\0')
				return ((void *)0);
			i++;
		}
		while (str[i] == to_find[j] && i != len)
		{
			j++;
			i++;
		}
		if (to_find[j] == '\0')
			i = i - j;
	}
	d = (char *)&str[i];
	return (d);
}
