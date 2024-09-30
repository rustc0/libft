#include <string.h>

void *ft_memset(void *ptr, int value, size_t num)
{
	unsigned char *p = (unsigned char*)ptr;
	while (num--)
	{
		*p++ = (unsigned char)value;
	}
	return (ptr);
}
