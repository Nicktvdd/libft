/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvan-den <nvan-den@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 17:31:00 by nvan-den          #+#    #+#             */
/*   Updated: 2022/10/25 17:51:38 by nvan-den         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//where the fuck do i get the unsigned int from in the function i call??
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		len;
	int		i;
	char	*result;

	len = 0;
	i = 0;
	while (s[len])
	{
		len++;
	}
	result = malloc(sizeof(char) * len + 1);
	while (s[i])
	{
		result[i] = f(i, s[i]);
		i++;
	}
	return (result);
}
