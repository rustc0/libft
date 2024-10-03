#include "../libft.h"

size_t ft_strlcat(char *dest, const char *src, size_t size)
{
    size_t dlen = 0;
    size_t slen = strlen(src);
    size_t i = 0;

    while (dest[dlen] != '\0' && dlen < size)
    {
        dlen++;
    }

    if (size == 0 || size <= dlen)
    {
        return slen + size;
    }

    while (src[i] != '\0' && i < (size - dlen - 1))
    {
        dest[dlen + i] = src[i];
        i++;
    }

    dest[dlen + i] = '\0';

    return dlen + slen;
}
