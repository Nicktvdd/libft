/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvan-den <nvan-den@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 14:51:46 by nvan-den          #+#    #+#             */
/*   Updated: 2022/11/02 15:06:03 by nvan-den         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	str = (void *)s;
	i = 0;
	while (i <= n)
	{
		if (str[i] == c)
		{
			str = &str[i];
			return (str);
		}
		i++;
	}
	return (NULL);
}
