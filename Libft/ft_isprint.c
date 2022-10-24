/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvan-den <nvan-den@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 18:17:19 by nvan-den          #+#    #+#             */
/*   Updated: 2022/10/24 18:21:44 by nvan-den         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(unsigned char c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}