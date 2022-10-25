/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvan-den <nvan-den@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 19:10:36 by nvan-den          #+#    #+#             */
/*   Updated: 2022/10/25 17:56:25 by nvan-den         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
// i would use strcpy?
int	ft_strlen(const char *s);

char	*strjoin(char const *s1, char const *s2)
{
	char	*newstr;
	int		i;
	int		j;
	int		s2size;

	s2size = (sizeof(s2) * ft_strlen(*s2));
	j = 0;
	i = 0;
	newstr = malloc((sizeof(s1) * ft_strlen(*s1)) + s2size + 1);
	if (newstr != NULL)
		return (NULL);
	while (s1[i])
	{
		newstr[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		newstr[i] = s2[j];
		j++;
		i++;
	}
	newstr[i] = NULL;
	return (newstr);
}
