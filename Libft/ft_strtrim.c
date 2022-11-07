/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvan-den <nvan-den@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 17:30:55 by nvan-den          #+#    #+#             */
/*   Updated: 2022/11/07 12:51:16 by nvan-den         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// strchr and strrchr

static int ft_ischar(char c, char const *set)
{
	int	i;
	int	result;

	i = 0;
	result = 0;
	while (set[i])
	{
		if (c == set[i])
			result++;
		i++;
	}
	return (result);
}

static int	ft_start(char const *s1, char const *set)
{
	int	start;

	start = 0;
	while (ft_ischar(s1[start], set) != 0)
	{
		start++;
	}
	printf("\n-start in strtrim is: %d-\n", start);
	return (start);
}

static	int	ft_end(char const *s1, char const *set)
{
	int	end;

	end = ft_strlen(s1) - 1;
	while (ft_ischar(s1[end], set) != 0)
	{
		end--;
	}
	end++;
	printf("\n-start in strtrim is: %d-\n", end);
	return (end);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		start;
	size_t		k;
	size_t		end;
	char		*newstring;

	if (!s1 || !set)
		return (NULL);
	start = ft_start(s1, set);
	k = 0;
	end = ft_end(s1, set);
	printf("\n-string in strtrim is: %lu-\n", (end - start));
	newstring = malloc(sizeof(*s1) * (end - start) + 1);
	if (newstring == NULL)
		return (0);
	end = end - start;
	while (k < end)
	{
		newstring[k++] = s1[start++];
	}
	printf("\n-k in strtrim is: %lu-\n", k);
	newstring[k] = '\0';
	return (newstring);
}
