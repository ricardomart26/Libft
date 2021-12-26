#ifndef STACK_H
# define STACK_H

# include <unistd.h>
# include <stdbool.h>

typedef struct s_stack
{
	size_t	bytes;
	size_t	lenght;
	size_t	capacity;
	void	*buffer;
	bool	full;
}	t_stack;

void	init_stacks();

#endif
