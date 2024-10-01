#include <stdlib.h>

void *ft_memmove(void *dest, const void *src, size_t num)
{
    unsigned char *d = (unsigned char *)dest;
    unsigned char *s = (unsigned char *)src;

    if (!d && !s)
    {
        return NULL;
    }

    if (d < s)
    {    
        while (num--)
        {
            *d++ = *s++;
        }
    }
    if (s < d)
    {
        size_t i = num;
        while (i--)
            d[i] = s[i];
    }
    return (dest);
}
