/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvan-den <nvan-den@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 17:31:10 by nvan-den          #+#    #+#             */
/*   Updated: 2022/10/25 18:19:26 by nvan-den         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>\
// why is there a free function we can use?
int	strlen1(char const *s, char c)
{
	int		len1;

	len1 = 0;
	while (s[len1] != c)
	{
		len1++;
	}
	return (len1);
}

void	split2(char const *s, char **split, int len1, int len2)
{
	while (s[len1])
	{
		split[1][len2] = s[len1];
		len1++;
		len2++;
	}
	split[1][len2] = NULL;
}

char	**ft_split(char const *s, char c)
{
	int		len1;
	int		len2;
	char	**split;

	len1 = strlen1(s, c);
	len2 = len1;
	while (s[len2])
	{
		len2++;
	}
	split = malloc(sizeof(s) * 2);
	split[0] = malloc(sizeof(char) * len1 + 1);
	split[1] = malloc(sizeof(char) * len2 + 1);
	len1 = 0;
	len2 = 0;
	while (s[len1] != c)
	{
		split[0][len1] = s[len1];
		len1++;
	}
	split2(s, split, len1, len2);
	split[0][len1] = NULL;
	return (split);
}
