#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <strings.h>
#include "libft.h"


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
void	teststrnstr(const char *vars, const char *vars2, size_t len)
{
	printf("ft_strnstr: ");
	if (ft_strnstr(vars, vars2, len) == strnstr(vars, vars2, len))
		printf("PASS");
	else
		printf("FAIL");
	printf("\n");
}
void	testmemset()
{
	int i = 0;
	char str[50];
	strcpy(str, "This is a test");
	char str2[50];
	strcpy(str2, "This is a test");
	printf("ft_memset:  ");
	ft_memset(str, '$', 4);
	memset(str2, '$', 4);
	while (str[i])
	{
		if (str[i] != str2[i])
		{
			printf("FAIL\n");
			return;
		}
		i++;
	}
	printf("PASS\n");
}
void	testbzero()
{
	int i = 0;
	char str[50];
	strcpy(str, "This is a test");
	char str2[50];
	strcpy(str2, "This is a test");
	printf("ft_bzero:  ");
	ft_bzero(str, 4);
	bzero(str2, 4);
	while(str[i])
	{
		if (str[i] != str2[i])
		{
			printf(" FAIL\n");
			return;
		}
		i++;
	}
	printf(" PASS\n");
}
void	testmemmove()
{
	int i = 0;
	char dest[] = "oldstring";
	const char src[] = "newstring";
	char dest2[] = "oldstring";
	const char src2[] = "newstring";
	printf("ft_memmove: ");
	ft_memmove(dest, src, 9);
	memmove(dest2, src2, 9);
	while (dest[i])
	{
		if (dest[i] != dest2[i])
		{
			printf("FAIL\n");
			return;
		}
		i++;
	}
	printf("PASS\n");
}
void	testmemcpy()
{
	int i = 0;
	char dest[] = "oldstring";
	const char src[] = "newstringislonger";
	char dest2[] = "oldstring";
	const char src2[] = "newstringislonger";
	printf("ft_memcpy: ");
	ft_memcpy(dest, src, 9);
	memcpy(dest2, src2, 9);
	printf("\nft is: %s\nnormal is: %s\n", dest, dest2);
	while (dest[i])
	{
		if (dest[i] != dest2[i])
		{
			printf("FAIL\n");
			return;
		}
		i++;
	}
	printf("PASS\n");
}
void	teststrlcpy()
{

}
void	teststrlcat()
{

}

int	main(void)
{
	unsigned char	varc = 'b';
	const char *vars = "Nick123";
	const char *varscpy = "Nick123";
	const char *vars2 = "ick";
	int nr = 4;
	testalpha(varc);
	testdigit(varc);
	testalnum(varc);
	testascii(varc);
	testprint(varc);
	teststrlen(vars);
	testmemset();
	testbzero();

	testmemcpy();
	testmemmove();
	teststrlcpy();
	teststrlcat();

	testtoupper(varc);
	testtolower(varc);



	// strchr


	// strrchr


	// memchr


	// strnstr
	teststrnstr(vars, vars2, 3);

	// atoi


	// calloc


	// strdup
	
	
	
	return (0);
}
