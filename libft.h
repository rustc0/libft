#ifndef LIBFT_H
#define LIBFT_H

#include <stdlib.h>
#include <unistd.h>

int	ft_isalnum(int c);
int	ft_isalpha(int c);
int	ft_isascii(int c);
int	ft_isdigit(int c);
int	ft_isprint(int c);
char	ft_tolower(int c);
char	ft_toupper(int c);
void	ft_bzero(void *s, size_t n);
void	*ft_memccpy(void *to, const void *from, int c, size_t n);
void	*ft_memchr(const void *str, int c, size_t num);
int	ft_memcmp(const void *ptr,const void *ptr2, size_t num);
void	*ft_memcpy(void *to,const void *from, size_t num);
void	*ft_memmove(void *dest, const void *src, size_t num);
void	*ft_memset(void *ptr, int value, size_t num);
char	*ft_strdup(const char *str);
size_t	ft_strlen(const char *str);
char	*ft_strcpy(char *dest, const char *src);
char	*ft_strncpy(char *dest, const char *src, size_t num);
char	*ft_strcat (char * dest, const char *src);

#endif