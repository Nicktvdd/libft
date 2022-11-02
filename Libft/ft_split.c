/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvan-den <nvan-den@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 17:31:10 by nvan-den          #+#    #+#             */
/*   Updated: 2022/11/02 10:56:45 by nvan-den         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// why is there a free function we can use?
static char	*ft_cmalloc(char const *s, char c)
{
	int		len;
	char	*str;
	int		i;

	i = 0;
	len = 0;
	while (s[len] != c)
	{
		len++;
	}
	str = malloc(sizeof(s) * (len + 1));
	if (str == NULL)
		return (0);
	while (s[i] != c)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

static int	ft_howmany_c(char const *s, char c)
{
	int	i;
	int	c_counter;

	i = -1;
	c_counter = 0;
	while (s[++i])
	{
		if (s[i] == c)
			c_counter++;
	}
	return (c_counter);
}

char	**ft_split(char const *s, char c)
{
	int		c_counter;
	char	**split;
	int		i;
	int		j;

	i = 0;
	j = 0;
	c_counter = ft_howmany_c(s, c);
	split = malloc(sizeof(s) * c_counter + 2);
	if (split == NULL)
		return (NULL);
	while (i <= c_counter)
	{
		split[i] = ft_cmalloc(&s[j], c);
		while (s[j] != c && s[j])
		{
			j++;
		}
		j++;
	}
	split[i] = NULL;
	return (split);
}
