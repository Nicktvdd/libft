#include <stdlib.h>

char    **ft_split(char const *s, char c)
{
    // why is there a free function we can use?
    int len1;
    int len2;

    len1 = 0;
    while (s[len1] != c)
    {
        len1++;
    }
    len2 = len1;

    while (s[len2])
    {
        len2++;
    }

    char **split;
    split = malloc(sizeof(s) * 2);
    split[0] = malloc(sizeof(char) * len1 + 1); //+1?
    split[1] = malloc(sizeof(char) * len2 + 1);

    len1 = 0;
    len2 = 0;
    while (s[len1] != c)
    {
        split[0][len1] = s[len1];
        len1++;
    }
    split[0][len1] = NULL;

    while (s[len1])
    {
        split[1][len2] = s[len1];
        len1++;
        len2++;
    }
    split[1][len2] = NULL;
    
    return (split);
}