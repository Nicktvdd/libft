/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvan-den <nvan-den@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 15:00:51 by nvan-den          #+#    #+#             */
/*   Updated: 2022/10/27 15:40:31 by nvan-den         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	i;

	i = 1;
	if (dstsize == 0)
		return (NULL);
	else
	{
		while (i++ < dstsize)
		{
			dst[i] = src[i];
		}
		dst[i] = NULL;
	}
	return (ft_strlen(src));
}
