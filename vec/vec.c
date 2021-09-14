/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 19:29:47 by rimartin          #+#    #+#             */
/*   Updated: 2021/09/14 19:30:38 by rimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

static void	add_last(t_vec *vec, int number, int pos)
{
}

t_vec	vec_add_value(t_vec vec, int number, int pos)
{
	if (pos == vec.lenght - 1)
		(int)vec.buffer[pos] = number;
}
