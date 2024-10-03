#include "../libft.h"


char	*ft_strncat (char * dest, const char *src, size_t n)
{
    size_t len;
    int i;

    i = 0;
    len = ft_strlen(dest);

    while (src[i] && n--)
    {
        dest[len] = src[i];
        i++;
        len++;
    }
    dest[len] = '\0';

    return (dest);
}
