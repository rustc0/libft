#include <stdlib.h>

int ft_memcmp(const void *ptr,const void *ptr2, size_t num)
{
    const unsigned char *str = (const unsigned char *)ptr;
    const unsigned char *str2 = (const unsigned char *)ptr2;

    while (num--)
    {
        if(*str != *str2)
            return (*str - *str2);
        str++;
        str2++;
    }
    return (0);
}

/*
int main ()
{
  char buffer1[] = "DWgaOtP12df0";
  char buffer2[] = "DWGAOTP12DF0";

  int n;

  n=ft_memcmp ( buffer1, buffer2, sizeof(buffer1) );

  if (n>0) printf ("'%s' is greater than '%s'.\n",buffer1,buffer2);
  else if (n<0) printf ("'%s' is less than '%s'.\n",buffer1,buffer2);
  else printf ("'%s' is the same as '%s'.\n",buffer1,buffer2);

  return 0;
}
*/