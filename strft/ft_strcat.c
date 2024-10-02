#include "../libft.h"

char	*ft_strcat (char * dest, const char *src)
{
    size_t len;
    int i;

    i = 0;
    len = ft_strlen(dest);

    while (src[i])
    {
        dest[len] = src[i];
        i++;
        len++;
    }
    dest[len] = '\0';

    return (dest);
}
