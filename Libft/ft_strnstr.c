/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvan-den <nvan-den@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 18:53:08 by nvan-den          #+#    #+#             */
/*   Updated: 2022/10/25 19:01:07 by nvan-den         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	while (1)
	{	
		j = 0;
		while (str[i] != to_find[j])
		{
			if (str[i] == '\0' || to_find[j] == '\0')
				return ((void *)0);
			i++;
		}
		while (str[i] == to_find[j])
		{
			j++;
			i++;
		}
		if (to_find[j] == '\0')
		{
			i = i - j;
			return (&str[i]);
		}
	}
}