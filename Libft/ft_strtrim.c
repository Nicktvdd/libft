/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvan-den <nvan-den@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 17:30:55 by nvan-den          #+#    #+#             */
/*   Updated: 2022/11/04 16:22:47 by nvan-den         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_start(char const *s1, char const *set)
{
	size_t	start;
	size_t	i;

	start = 0;
	i = 0;
	while (set[i])
	{
		while (s1[start] == set[i])
		{
			start++;
			i = 0;
		}
		i++;
	}
	return (start);
}

static int	ft_end(char const *s1, char const *set)
{
	size_t	end;
	size_t	i;

	i = 0;
	end = ft_strlen(s1) - 1;
	while (set[i])
	{
		while (s1[end] == set[i])
		{
			end--;
			i = 0;
		}
		i++;
	}
	return (end);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		start;
	size_t		k;
	size_t		end;
	char		*newstring;

	start = ft_start(s1, set);
	k = 0;
	end = ft_end(s1, set);
	newstring = malloc(sizeof(*s1) * (end - start));
	if (newstring == NULL)
		return (0);
	while (start <= end)
	{
		newstring[k++] = s1[start++];
	}
	newstring[k] = '\0';
	return (newstring);
}
