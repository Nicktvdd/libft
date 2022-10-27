/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvan-den <nvan-den@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 14:09:16 by nvan-den          #+#    #+#             */
/*   Updated: 2022/10/27 15:14:20 by nvan-den         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdio.h>
# include <ctype.h>
# include <string.h>
# include <strings.h>
# include <stdlib.h>

int		ft_isalpha(unsigned char c);
int		ft_isdigit(unsigned char c);
int		ft_isalnum(unsigned char c);
int		ft_isascii(unsigned char c);
int		ft_isprint(unsigned char c);
size_t	ft_strlen(const char *s);
char	ft_toupper(const char c);
char	ft_tolower(const char c);
char	*ft_strnstr(const char *str, const char *to_find, size_t len);
void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *b, size_t len);
void	*memmove(void *dst, const void *src, size_t len);
void	*memcpy(void *restrict dst, const void *restrict src, size_t n);
size_t	strlcpy(char * restrict dst, const char * restrict src, size_t dstsize);

#endif /*HEADER_H*/