#include <stdlib.h>
#include <stdio.h>
#include <string.h>

static	
size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	srcsize;
	size_t	i;

	srcsize = 0;
	i = 0;
	if (!src || !dest)
		return (0);
	srcsize = strlen(src);
	if (size != 0)
	{
		while (src[i] != '\0' && i < (size - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (srcsize);
}

char    *ft_strtrim(char const *s1, char const *set)
{
	int     start;
	int     end;
	char    *buff;
	int		nsize;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = strlen(s1) - 1;
	while(strchr(set, s1[start]) && start <= end)
		start++;
	while(strchr(set, s1[end]) && end >= 0)
		end--;
	nsize = end - start + 2;
	buff = (char *)malloc(nsize);
	if (!buff)
		return (NULL);
	ft_strlcpy(buff, s1 + start, nsize);
	return (buff);
}

// int main(void)
// {
// 	char str[] = "@#@#!!# HEllO w@rld!.@@##!";
// 	char s[] = "!@#";

// 	printf("before : %s\n", str);
// 	char *s2 = ft_strtrim(str, s);
// 	printf("after : %s\n", s2);

// 	return 0;
// }