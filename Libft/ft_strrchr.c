/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvan-den <nvan-den@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 15:50:33 by nvan-den          #+#    #+#             */
/*   Updated: 2022/10/28 14:05:00 by nvan-den         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char 	*result;
	
	i = 0;
	result = NULL;
	while (s[i])
		i++;
	while (s[i] != c && s[i] != '\0')
	{
		i--;
	}
	*result = s[i];
	return(result);
}
