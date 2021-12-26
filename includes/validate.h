#ifndef VALIDATE_H
# define VALIDATE_H

#include <stdbool.h>

bool	ft_isalnum(const int c);
bool	ft_isalpha(const int c);
bool	ft_isascii(const int c);
bool	ft_isdigit(const int c);
bool	ft_isprint(const int c);
bool	ft_isspace(char c);
bool	ft_check_ext(const char *file, const char *ext);

#endif
