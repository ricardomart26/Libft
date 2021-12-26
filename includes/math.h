#ifndef MATH_H
# define MATH_H

#include <stdbool.h>


/**
 * TODO: Funções ainda não disponiveis
 */

// void	pow_int(int *nbr, const int power);
// void	pow_long(long *nbr, const int power);
// void	pow_float(float *nbr, const int power);
// void	pow_double(double *nbr, const int power);
// void	pow_biglong(long long *nbr, const int power);



bool	range_biglong(long long nbr, long long min, long long max);
bool	range_long(long nbr, long min, long max);
bool	range_int(int nbr, int min, int max);
bool	range_float(float nbr, float min, float max);
bool	range_double(double nbr, double min, double max);

#endif
