#ifndef MY_FCNTL_H
# define MY_FCNTL_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1024
# endif

#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "string.h"

typedef struct s_read
{
	int		ret;
	char	*temp;
}	t_read;

int		get_next_line(int fd, char **line);

#endif
