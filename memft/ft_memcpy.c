#include <stdlib.h>

void *ft_memcpy(void *to,const void *from, size_t num)
{
	unsigned char *to1 = (unsigned char *)to;
	const unsigned char *from1 = (const unsigned char *)from;

	while (num--)
	{
		*to1++ = *from1++;
	}
	return (to);
}