/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvan-den <nvan-den@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 15:50:33 by nvan-den          #+#    #+#             */
/*   Updated: 2022/10/28 14:43:34 by nvan-den         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char 	*str;
	
	str = (char*)s;
	i = 0;
	while (str[i])
		i++;
	while (str[i] != c && str[i] != '\0')
	{
		i--;
	}
	return(str);
}
