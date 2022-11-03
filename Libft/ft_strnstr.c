/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvan-den <nvan-den@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 18:53:08 by nvan-den          #+#    #+#             */
/*   Updated: 2022/11/03 13:54:06 by nvan-den         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		i;
	size_t		j;

	i = 0;
	if (needle == NULL)
		return ((char *)haystack);
	while (haystack[i])
	{	
		if (haystack[i] == '\0' || needle[j] == '\0')
			return (NULL);
		j = 0;
		while (haystack[i] != needle[j] && haystack[i])
		{
			i++;
		}
		while (haystack[i] == needle[j] && i != len && haystack[i])
		{
			j++;
			i++;
		}
		if (needle[j] == '\0')
			i = i - j;
	}
	if (haystack[i] == '\0')
		return (NULL);
	else
		return ((char *)&haystack[i]);
}
