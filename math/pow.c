/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pow.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricardo <ricardo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 04:56:01 by ricardo           #+#    #+#             */
/*   Updated: 2021/09/19 04:56:20 by ricardo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	pow_int(int *nbr, const int power)
{
	bool	minus;
	int		i;

	minus = false;
	if (power < 1 && *nbr == 0)
		return ;
	if (*nbr < 0)
	{
		minus = true;
		ABS(*nbr)
	}
	i = -1;
	while (++i < power - 1)
		*nbr *= *nbr;
	if (minus)
		*nbr *= -1;
}

void	pow_long(long *nbr, const int power)
{
	bool	minus;
	int		i;

	minus = false;
	if (power < 1 && *nbr == 0)
		return ;
	if (*nbr < 0)
	{
		minus = true;
		ABS(*nbr)
	}
	i = -1;
	while (++i < power - 1)
		*nbr *= *nbr;
	if (minus)
		*nbr *= -1;
}

void	pow_float(float *nbr, const int power)
{
	bool	minus;
	int		i;

	minus = false;
	if (power < 1 && *nbr == 0)
		return ;
	if (*nbr < 0)
	{
		minus = true;
		ABS(*nbr)
	}
	i = -1;
	while (++i < power - 1)
		*nbr *= *nbr;
	if (minus)
		*nbr *= -1;
}

void	pow_double(double *nbr, const int power)
{
	bool	minus;
	int		i;

	minus = false;
	if (power < 1 && *nbr == 0)
		return ;
	if (*nbr < 0)
	{
		minus = true;
		ABS(*nbr)
	}
	i = -1;
	while (++i < power - 1)
		*nbr *= *nbr;
	if (minus)
		*nbr *= -1;
}

void	pow_biglong(long long *nbr, const int power)
{
	bool	minus;
	int		i;

	minus = false;
	if (power < 1 && *nbr == 0)
		return ;
	if (*nbr < 0)
	{
		minus = true;
		ABS(*nbr)
	}
	i = -1;
	while (++i < power - 1)
		*nbr *= *nbr;
	if (minus)
		*nbr *= -1;
}
