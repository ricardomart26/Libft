#include "libft.h"

t_vec	init_vec(size_t	capacity, size_t bytes)
{
	t_vec	vec;

	vec.bytes = bytes;
	vec.capacity = capacity;
	vec.lenght = 0;
	vec.buffer = ft_calloc(capacity, bytes);
	if (!vec.buffer)
		return ;
	return (vec);
}
