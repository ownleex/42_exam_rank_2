#include <stdlib.h>

char    *ft_strdup(char *src)
{
    int     i = 0;
    int     len = 0;
    char    *copy;

    while (src[i])
        len++;
    copy = malloc(sizeof(char) * (len + 1));
    if (copy != NULL)
    {
        while (src[i])
        {
            copy[i] = src[i];
            i++;
        }
        copy[i] = '\0';
    }
    return (copy);
}