#include "../libft.h"

char *ft_strchr(const char *str,int c)
{
    char c1 = (char)c;

    while (*str)
    {
        if (*str == c1)
            return ((char *)str);
        str++;
    }
    if (c1 == '\0')
        return ((char *)str);
        
    return (NULL);
}