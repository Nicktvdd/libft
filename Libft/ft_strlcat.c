/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvan-den <nvan-den@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 15:22:50 by nvan-den          #+#    #+#             */
/*   Updated: 2022/10/27 15:41:11 by nvan-den         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	i;

	i = dstsize + 1;
	if (dstsize == 0 || ft_strlen(dst) > dstsize)
		return (NULL);
	else
	{
		while (i-- > 0)
		{
			dst[i] = src[i];
		}
		dst[i] = NULL;
	}
	return (ft_strlen(dst) + ft_strlen(src));
}
