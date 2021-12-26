/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_c_in_str.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricardo <ricardo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 23:33:03 by rimartin          #+#    #+#             */
/*   Updated: 2021/12/26 18:25:38 by ricardo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"

bool	find_c_in_str(int c, char *str)
{
	while (*str)
	{
		if (c == *str)
			return (true);
		str++;
	}
	return (false);
}
