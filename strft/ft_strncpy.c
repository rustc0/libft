#include "../libft.h"

char *ft_strncpy(char *dest, const char *src, size_t num)
{
    int i;

    i = 0;
    while (src[i] && i < num)
    {
        dest[i] = src [i];
        i++;
    }
    while (i < num)
    {
        dest[i] = '\0';
        i++;
    }
    return (dest);
}
