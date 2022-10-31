/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvan-den <nvan-den@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 11:58:56 by nvan-den          #+#    #+#             */
/*   Updated: 2022/10/31 12:22:54 by nvan-den         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*string;
	size_t		i;
	
	string = malloc(sizeof(size) * count);
	if (string == NULL)
		return (0);
	ft_bzero(string, count);
	return (string);
}