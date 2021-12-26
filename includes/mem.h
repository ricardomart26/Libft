#ifndef MEM_H
# define MEM_H

#include <unistd.h>
#include <stdlib.h>

void	ft_malloc_guard(void **alloc_var, int size, int data_type_size);
void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t nmemb, size_t size);
void	*ft_memccpy(void *dest, const void *src, int c, size_t n);
void	*ft_memchr(const void *s, const int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memset(void *s, const int c, size_t n);

#endif
