/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvan-den <nvan-den@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 18:06:53 by nvan-den          #+#    #+#             */
/*   Updated: 2022/10/24 18:59:24 by nvan-den         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isacii(unsigned int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}
