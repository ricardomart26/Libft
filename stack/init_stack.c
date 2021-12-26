#include "stack.h"
#include "macros.h"

void	push_back(t_stack *stack, void *value)
{
	int	last_element;

	last_element = stack->lenght;
	if (stack->capacity == stack->lenght + 1)
		stack->full = true;

	stack->lenght++;
	stack->buffer[last_element] = *value;
}

int	set_capacity(t_stack *stack, int capacity)
{
	if (capacity < stack->lenght)
		return (ERROR);
	if (capacity == stack->lenght)
		stack->full = true;
	stack->capacity = capacity;
	return (0);
}

void	init_stacks()
{
	t_stack	stack;

	stack.lenght = 0;
	stack.capacity = 0;
	stack.buffer = 0;
	stack.bytes = 0;
	stack.full = false;
	return stack;
}
