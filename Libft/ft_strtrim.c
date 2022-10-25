#include <stdlib.h>

char    *ft_strtrim(char const *s1, char const *set)
{
    int i;
    int j;

    i = 0;
    j = 0;
    // malloc that shit so it returns a COPY?
    while (s1[i] == set[i])
    {
        s1[i] = NULL;
        i++;
    }
    s1 = &s1[i];
    
    while (s1[i])
    {
        i++;
    }
    i--;

    while (s1[i] == set[j])
    {
        s1[i] = NULL;
        i--;
        j++;
    }
    return (s1);
}