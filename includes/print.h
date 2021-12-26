#ifndef PRINT_H
# define PRINT_H

# include <unistd.h>
# include <limits.h>
# include <stdlib.h>

void	ft_print_dp(void **r, int fd, int len);
void	ft_error_msg(const char *str);
void	ft_putendl_fd(const char *s, int fd);
void	ft_putchar_fd(const char c, int fd);
void	ft_putstr_fd(const char *s, int fd);
void	ft_putnbr_fd(int n, int fd);

#endif
