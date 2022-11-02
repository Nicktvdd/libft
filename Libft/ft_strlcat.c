/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvan-den <nvan-den@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 15:22:50 by nvan-den          #+#    #+#             */
/*   Updated: 2022/11/02 12:48:19 by nvan-den         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = dstsize;
	if (dstsize == 0 || ft_strlen(dst) > dstsize)
		return ('\0');
	else
	{
		while (i > 0)
		{
			dst[i] = src[i];
			--i;
		}
		dst[++i] = '\0';
	}
	return (ft_strlen(dst) + ft_strlen(src));
}
