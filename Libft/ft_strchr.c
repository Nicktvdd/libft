/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvan-den <nvan-den@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 15:46:13 by nvan-den          #+#    #+#             */
/*   Updated: 2022/10/31 13:02:52 by nvan-den         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	char	*str;

	str = (char *)s;
	i = 0;
	while (str[i] != c && str[i] != '\0')
	{
		i++;
	}
	str = &str[i];
	return (str);
}
