/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvan-den <nvan-den@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 18:38:03 by nvan-den          #+#    #+#             */
/*   Updated: 2022/10/24 19:06:09 by nvan-den         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	int		i;

	i = 0;
	sub = malloc(sizeof(*s) * len + 1);
	if (sub)
	{
		return (NULL);
	}
	while (len)
	{
		sub[i] = s[i];
		len--;
		i++;
	}
	sub[i] = NULL;
}
