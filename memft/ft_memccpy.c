#include <stdlib.h>

void *ft_memccpy(void *to, const void *from, int c, size_t n)
{
    unsigned char *to1 = (unsigned char *)to;
    const unsigned char *from1 = (const unsigned char *)from;
    unsigned char c1 = (unsigned char)c;

    while (n--)
    {
        *to1 = *from1;
        if (*from1 == c1)
            return (to1 + 1);
        to1++;
        from1++;
    }

    return NULL;
}
