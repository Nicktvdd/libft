#include <stdlib.h>

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    int len;
    int i;

    len = 0;
    i = 0;

    char *result;

    while (s[len])
    {
        len++;
    }

    result = malloc(sizeof(char) * len + 1);

    while (s[i])
    {
        result[i] = f(i, s[i]); //where the fuck do i get the unsigned int from?
        i++;
    }
    return(result);
}