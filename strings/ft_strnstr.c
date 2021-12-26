/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricardo <ricardo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 12:38:45 by rimartin          #+#    #+#             */
/*   Updated: 2021/12/26 18:24:42 by ricardo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	c;
	size_t	i;
	char	*ret;

	i = 0;
	ret = (char *)haystack;
	if (needle[i] == '\0')
		return (ret);
	while (ret[i] != '\0' && len > i)
	{
		c = 0;
		while (needle[c] == ret[i + c] && (i + c) < len)
		{
			if (needle[c + 1] == '\0')
				return (&ret[i]);
			c++;
		}
		i++;
	}
	return (NULL);
}
