/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvan-den <nvan-den@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 17:30:55 by nvan-den          #+#    #+#             */
/*   Updated: 2022/10/26 15:50:43 by nvan-den         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlen(const char *s);

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	char	*newstring;

	i = 0;
	j = 0;
	newstring = malloc(sizeof(*s1) * ft_strlen(*s1) + 1);
	newstring = s1;
	while (newstring[i] == set[i])
	{
		newstring[i] = NULL;
		i++;
	}
	newstring = &newstring[i];
	while (newstring[i])
		i++;
	i--;
	while (newstring[i] == set[j])
	{
		newstring[i] = NULL;
		i--;
		j++;
	}
	return (newstring);
}
