/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricardo <ricardo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 13:40:58 by rimartin          #+#    #+#             */
/*   Updated: 2021/12/26 18:24:47 by ricardo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	c;
	char			*str;
	int				size_str;

	if (!s || !f)
		return (NULL);
	size_str = ft_strlen((char *)s);
	str = (char *)malloc(size_str + 1);
	if (!str)
		return (NULL);
	c = 0;
	while (s[c])
	{
		str[c] = f(c, s[c]);
		c++;
	}
	str[c] = 0;
	return (str);
}
