#include <stdio.h>
#include <ctype.h>
#include <string.h>

int	ft_isalpha(unsigned char c);
int	ft_isdigit(unsigned char c);
int	ft_isalnum(unsigned char c);
int	ft_isascii(unsigned char c);
int	ft_isprint(unsigned char c);
size_t	ft_strlen(const char *s);
char	ft_toupper(const char c);
char	ft_tolower(const char c);


void	testalpha(char varc)
{
	printf("ft_isalpha: ");
	if (ft_isalpha(varc) == isalpha(varc))
		printf("PASS");
	else
		printf("FAIL");
	printf("\n");
}
void	testdigit(char varc)
{
	printf("ft_isdigit: ");
	if (ft_isdigit(varc) == isdigit(varc))
		printf("PASS");
	else
		printf("FAIL");
	printf("\n");
}
void	testalnum(char varc)
{
	printf("ft_isalnum: ");
	if (ft_isalnum(varc) == isalnum(varc))
		printf("PASS");
	else
		printf("FAIL");
	printf("\n");
}
void	testascii(char varc)
{
	printf("ft_isascii: ");
	if (ft_isascii(varc) == isascii(varc))
		printf("PASS");
	else
		printf("FAIL");
	printf("\n");
}
void	testprint(char varc)
{
	printf("ft_isprint: ");
	if (ft_isprint(varc) == isprint(varc))
		printf("PASS");
	else
		printf("FAIL");
	printf("\n");
}
void	teststrlen(const char *vars)

{
	printf("ft_strlen: ");
	if (ft_strlen(vars) == strlen(vars))
		printf(" PASS");
	else
		printf(" FAIL");
	printf("\n");
}
void	testtoupper(char varc)
{
	printf("ft_toupper: ");
	if (ft_toupper(varc) == toupper(varc))
		printf("PASS");
	else
		printf("FAIL");
	printf("\n");
}
void	testtolower(char varc)
{
	printf("ft_tolower: ");
	if (ft_tolower(varc) == tolower(varc))
		printf("PASS");
	else
		printf("FAIL");
	printf("\n");
}


int	main(void)
{
	unsigned char	varc = 'b';
	const char *vars = "Nick123";
	testalpha(varc);
	testdigit(varc);
	testalnum(varc);
	testascii(varc);
	testprint(varc);
	teststrlen(vars);

	// memset


	// bzero


	// memcpy


	// memmove


	// strlcpy


	// strlcat


	testtoupper(varc);
	testtolower(varc);



	// strchr


	// strrchr


	// memchr


	// strnstr


	// atoi



	
	
	
	
	
	
	
	
	
	return (0);
}
