#include <stdlib.h>

void *ft_memchr(const void *str, int c, size_t num)
{
    const unsigned char *str1 = (const unsigned char *)str;
    unsigned char c1 = (unsigned char)c;

    while (num--)
    {
        if (*str1 == c1)
            return (void *)str1;
        str1++;
    }
    return (NULL);
}

/*
int main (void)
{
  char * pch;
  char str[] = "Example string";
  pch = (char*) ft_memchr (str, 'p', strlen(str));
  if (pch!=NULL)
    printf ("'p' found at position %d.\n", pch-str+1);
  else
    printf ("'p' not found.\n");
  return 0;
}
*/