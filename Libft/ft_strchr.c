/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvan-den <nvan-den@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 15:46:13 by nvan-den          #+#    #+#             */
/*   Updated: 2022/10/28 14:00:53 by nvan-den         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	char 	*result;
	result = NULL;

	i = 0;
	while (s[i] != c && s[i] != '\0')
	{
		i++;
	}
	*result = s[i];
	return(result);
}
