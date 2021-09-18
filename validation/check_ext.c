/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_ext.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricardo <ricardo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 23:43:57 by rimartin          #+#    #+#             */
/*   Updated: 2021/09/18 04:29:12 by ricardo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	check_file(const char *file, const char *ext)
{
	while (*file != '\0')
	{
		if (*file == '.')
		{
			while (*file == *ext && (*file != '\0' || *ext != '\0'))
			{
				file++;
				ext++;
			}
			if (*file == '\0' && *ext == '\0')
				return (1);
		}
		file++;
	}
	return (0);
}
