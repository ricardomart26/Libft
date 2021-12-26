/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_guards.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricardo <ricardo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 22:40:17 by rimartin          #+#    #+#             */
/*   Updated: 2021/12/26 18:27:11 by ricardo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mem.h"
#include "print.h"

void	ft_malloc_guard(void **alloc_var, int size, int data_type_size)
{
	if (size <= 0 || data_type_size <= 0)
		ft_error_msg("Error in malloc_guards: size or data size <= 0");
	*alloc_var = malloc(size * data_type_size);
	if (!(*alloc_var))
		ft_error_msg("Error in malloc_guards: Couldn't alloc mem for variable");
}
