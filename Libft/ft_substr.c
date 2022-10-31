/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvan-den <nvan-den@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 18:38:03 by nvan-den          #+#    #+#             */
/*   Updated: 2022/10/31 15:57:44 by nvan-den         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;

	i = start;
	sub = malloc(sizeof(*s) * len + 1);
	/* if (sub != NULL)
	{
		return (NULL);
	} */
	while (i < len)
	{
		sub[i] = s[i];
		len--;
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
