#ifndef CONV_H
# define CONV_H

# include <limits.h>
# include <unistd.h>
# include <stdlib.h>

int		ft_atoi(const char *nptr);
char	*ft_itoa(const int n);
char	*ft_htoa(unsigned int n, const int control);

#endif
