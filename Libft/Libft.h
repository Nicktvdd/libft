#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <strings.h>

int	ft_isalpha(unsigned char c);
int	ft_isdigit(unsigned char c);
int	ft_isalnum(unsigned char c);
int	ft_isascii(unsigned char c);
int	ft_isprint(unsigned char c);
size_t	ft_strlen(const char *s);
char	ft_toupper(const char c);
char	ft_tolower(const char c);
char	*ft_strnstr(const char *str, const char *to_find, size_t len);
void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *b, size_t len);