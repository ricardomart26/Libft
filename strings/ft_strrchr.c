/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricardo <ricardo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 13:02:41 by rimartin          #+#    #+#             */
/*   Updated: 2021/12/26 18:24:40 by ricardo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"

char	*ft_strrchr(const char *s, int c)
{
	int		size;
	char	*ptr;

	size = 0;
	ptr = (char *)s;
	while (s[size])
		size++;
	if (c == '\0')
		return ((char *)s + size);
	while (0 < size--)
		if (ptr[size] == (char)c)
			return ((char *)s + size);
	return (0);
}
