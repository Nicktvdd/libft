/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvan-den <nvan-den@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 17:31:10 by nvan-den          #+#    #+#             */
/*   Updated: 2022/11/01 14:26:57 by nvan-den         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>\
// why is there a free function we can use?
static int	strlen1(char const *s, char c)
{
	int		len1;

	len1 = 0;
	while (s[len1] != c)
	{
		len1++;
	}
	return (len1);
}

static void	split2(char const *s, char **split, int len1, int len2)
{
	while (s[len1])
	{
		split[1][len2] = s[len1];
		len1++;
		len2++;
	}
	split[1][len2] = '\0';
}

static int ft_howmany_c(char const *s, char c)
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
	int		len1;
	int		len2;
	int		c_counter;
	char	**split;

	len1 = strlen1(s, c);
	len2 = len1;
	c_counter = ft_howmany_c(s, c);
	while (s[len2])
	{
		len2++;
	}
	split = malloc(sizeof(s) * c_counter);
	if (split == NULL)
		return (NULL);
	while (c_counter-- > 0)
	{
		split[c_counter] = malloc(sizeof(char) * len1 + 1);
	}
	len1 = 0;
	len2 = 0;
	while (s[len1] != c)
	{
		split[0][len1] = s[len1];
		len1++;
	}
	split2(s, split, len1, len2);
	split[0][len1] = '\0';
	return (split);
}
