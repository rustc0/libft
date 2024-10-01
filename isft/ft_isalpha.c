#include <stdlib.h>

int ft_isalpha(char c)
{
    return ((c <= 'z' && c >= 'a') ||
            (c <= 'Z' && c >= 'A'));
}