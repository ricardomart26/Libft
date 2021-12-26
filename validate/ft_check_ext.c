/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_ext.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricardo <ricardo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 23:43:57 by rimartin          #+#    #+#             */
/*   Updated: 2021/12/26 18:27:42 by ricardo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "validate.h"
#include "string.h"

bool	ft_check_ext(const char *file, const char *ext)
{
	int	size;
	int	size_ext;

	if (!ext && !file)
		return (false);
	size = ft_strlen(file) - 1;
	size_ext = ft_strlen(ext) - 1;
	file += size;
	ext += size_ext;
	while (*file == *ext && size_ext != 0)
	{
		file--;
		ext--;
		size_ext--;
	}
	if (size_ext == 0)
		return (true);
	return (false);
}
