#include "../libft.h"

char *ft_strdup(const char *str)
{
    size_t len = ft_strlen(str);
    char *s2 = (char *)malloc(len + 1 * sizeof(char));
    if (!s2)
		return (NULL);

    int i = 0;
    while (str[i])
    {
        s2[i] = str[i];
        i++;
    }
    s2[i] = '\0';

    return (s2);
}